import numpy as np
import matplotlib.pyplot as plt

data=np.genfromtxt("CircuitoRC.txt")
y=data[:,1]
t=data[:,0]
q=95
dt=np.linspace(0,300)
I=50*2
condicion=1
g=10
n=0.1
cw=[]
lhw=[]
rw=[]

def lh(yex, yteo):
    sc = (1.0/(90000)*2.0)*sum((yex-yteo)**2)
    return np.exp(-sc)
def sol(r,c,q,t):
    y = q*(1-np.exp(-t/r*c)) 
    return y

cw=np.append(cw, np.random.random())
rw=np.append(rw, np.random.random())
y0=sol(rw[0],cw[0],q,t)
lw=np.append(lhw, lh(y, y0))

for i in range(10000):
    c1=np.random.normal(cw[i], n)
    r1=np.random.normal(rw[i], n) 
    y1=sol(r1,c1,I*c1*r1*g,t)
    y0=sol(rw[i],cw[i],rw[i]*cw[i]*I*g,t)
    l0=lh(y, y0)
    lp=lh(y, y1)
    ax=lp/l0
    if(ax>=condicion):
        cw=np.append(cw,c1)
        lhw=np.append(lhw, lp)
        rw=np.append(rw,r1)
    else:
        bx=np.random.random()
        if(bx<=ax):
            cw=np.append(cw,c1)
            lhw=np.append(lhw, lp)
            rw=np.append(rw,r1)
        else:
            cw=np.append(cw,cw[i])
            lhw=np.append(lhw, l0)
            rw=np.append(rw,rw[i])

fig=plt.figure()
plt.title('Histograma valores C')
count, bins,ig=plt.hist(cw, 100, normed=True)
plt.savefig("graf3.png")
plt.close()

fig=plt.figure()
plt.title('Histograma valores R')
count, bins,ig=plt.hist(rw, 100, normed=True)
plt.savefig("graf4.png")
plt.close()

lhMax=np.argmax(lhw)
Ir=rw[lhMax]
Ic=cw[lhMax]
Texr=str(Ir)
Texc=str(Ic)
Q=Ir*Ic*I*g         
Iy=sol(Ir,Ic,Q,dt)

fig=plt.figure()
plt.title('Grafica mejores parametros R y C')
plt.scatter(t,y)
plt.plot(dt, Iy)
plt.text(230,9,"C=" +Texc[:12])
plt.text(230,2,"R=" +Texr[:12])
plt.savefig("graf5.png")
plt.close()