import numpy as np
import matplotlib.pyplot as plt

puntos=np.genfromtxt("Canal_ionico.txt")
puntos2=np.genfromtxt("Canal_ionico1.txt")
datos=np.genfromtxt("data.txt")
x=puntos[:,0]
y=puntos[:,1]
x_2=puntos2[:,0]
y_2=puntos2[:,1]
x0=datos[0]
y0=datos[1]
r0=datos[2]
x02=3.316882
y02=3.988021
r02=5.906846

fig=plt.figure()
ax=fig.add_subplot(2,1,1)
plt.axis('equal')
circ=plt.Circle((x0, y0), radius=r0, color='r', fill=False)
plt.scatter(x,y)
plt.scatter(x0,y0,c="r")
ax.add_patch(circ)
plt.title('Grafica Poro1')
plt.text(5,120,"x=" +x0[:8])
plt.text(5,115,"y=" +y0[:8])
plt.text(5,110,"r=" +r0[:8])
plt.savefig("graf1.png")
plt.close()

fig=plt.figure()
ax1=fig.add_subplot(2,1,2)
plt.axis('equal')
circ1=plt.Circle((x02,y02), radius=r02, color='g', fill=False)#Los valores para este caso fueron tomados despues de correr el programa en c para el segundo conjunto de datos Canal_ionico.txt pero no se descargan directamente de los datos generados por canal_ionico.c como si sucede para la primera grafica.
plt.scatter(x_2,y_2)
plt.scatter(3.316882,3.988021,c="g")
ax1.add_patch(circ1)
plt.title('Grafica Poro2')
plt.text(5,120,"x=" +x02[:8])
plt.text(5,115,"y=" +y02[:8])
plt.text(5,110,"r=" +r02[:8])
plt.savefig("graf2.png")
plt.close()