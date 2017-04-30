import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import axes3d

datos=np.genfromtxt("data.txt", delimiter=",")
n=9409

#CASO1 abierto
t1C1a=datos[0:9408,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Abierto t=0s')
ax.plot_wireframe(t1C1a[:,0],t1C1a[:,1],t1C1a[:,2])
plt.savefig("t1c1a",format="png")
plt.close()

t2C1a=datos[9409:18817,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Abierto t=100s')
ax.plot_wireframe(t2C1a[:,0],t2C1a[:,1],t2C1a[:,2])
plt.savefig("t2c1a",format="png")
plt.close()

t3C1C=datos[18818:28226,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Abierto t=2500s')
ax.plot_wireframe(t3C1a[:,0],t3C1a[:,1],t3C1a[:,2])
plt.savefig("t3c1a",format="png")
plt.close()

#CASO1 periodico
t1C1p=datos[28227:37635,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Periodico t=0s')
ax.plot_wireframe(T0C1P[:,0],T0C1P[:,1],T0C1P[:,2])
plt.savefig("t1c1p",format="png")
plt.close()

t2C1p=datos[37636:47044,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Periodico t=100s')
ax.plot_wireframe(T1C1P[:,0],T1C1P[:,1],T1C1P[:,2])
plt.savefig("t2c1p",format="png")
plt.close()

t3C1p=datos[47045:56453,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Periodico t=2500s')
ax.plot_wireframe(T2C1P[:,0],T2C1P[:,1],T2C1P[:,2])
plt.savefig("t3c1p",format="png")
plt.close()

#CASO1 constante
T0C1A=datos[56454:65862,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Constante t=0s')
ax.plot_wireframe(T0C1A[:,0],T0C1A[:,1],T0C1A[:,2])
plt.savefig("t1c1c",format="png")
plt.close()

T1C1A=datos[65863:75271,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Constante t=100s')
ax.plot_wireframe(T1C1A[:,0],T1C1A[:,1],T1C1A[:,2])
plt.savefig("t3c1c",format="png")
plt.close()

T2C1A=datos[75272:84680,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso1 Constante t=2500s')
ax.plot_wireframe(T2C1A[:,0],T2C1A[:,1],T2C1A[:,2])
plt.savefig("t3c1c",format="png")
plt.close()

#--------------------------------------------------------------------------------------------------------------------------------------------

#CASO2 abierto
T0C2C=datos[84681:94089,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Abierto t=0s')
ax.plot_wireframe(T0C2C[:,],T0C2C[:,1],T0C2C[:,2])
plt.savefig("t1c2a",format="png")
plt.close()

T1C2C=datos[94090:103498,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Abierto t=100s')
ax.plot_wireframe(T1C2C[:,0],T1C2C[:,1],T1C2C[:,2])
plt.savefig("t2c2a",format="png")
plt.close()

T2C2C=datos[103499:112907,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Abierto t=2500s')
ax.plot_wireframe(T2C2C[:,0],T2C2C[:,1],T2C2C[:,2])
plt.savefig("t3c2a",format="png")
plt.close()

#CASO2 periodico
T0C2C=datos[112908:122316,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Periodico t=0s')
ax.plot_wireframe(T0C2C[:,0],T0C2C[:,1],T0C2C[:,2])
plt.savefig("t1c2p",format="png")
plt.close()

T1C2C=datos[122317:131725,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Periodico t=100s')
ax.plot_wireframe(T1C2C[:,0],T1C2C[:,1],T1C2C[:,2])
plt.savefig("t2c2p",format="png")
plt.close()

T2C2C=datos[131726:141134,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Periodico t=2500s')
ax.plot_wireframe(T2C2C[:,0],T2C2C[:,1],T2C2C[:,2])
plt.savefig("t3c2p",format="png")
plt.close()

#CASO2 constante
T0C2C=datos[141135:150543,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Constante t=0s')
ax.plot_wireframe(T0C2C[:,0],T0C2C[:,1],T0C2C[:,2])
plt.savefig("t1c2c",format="png")
plt.close()

T1C2C=datos[150544:159952,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Constante t=100s')
ax.plot_wireframe(T1C2C[:,0],T1C2C[:,1],T1C2C[:,2])
plt.savefig("t2c2c",format="png")
plt.close()

T2C2C=datos[159953:169361,2:5]
fig=plt.figure()
ax=fig.add_subplot(111, projection="3d")
plt.title('Caso2 Constante t=2500s')
ax.plot_wireframe(T2C2C[:,0],T2C2C[:,1],T2C2C[:,2])
plt.savefig("t3c2c",format="png")
plt.close()




