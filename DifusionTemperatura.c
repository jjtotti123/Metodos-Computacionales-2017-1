#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Caso1per(float a, int tmax, float dt, float dx, float dy);
void Caso1abierto(float a, int tmax, float dt, float dx, float dy);
void Caso1cons(float a, int tmax, float dt, float dx, float dy);

void Caso2abierto(float a, int tmax, float dt, float dx, float dy);
void Caso2per(float a, int tmax, float dt, float dx, float dy);
void Caso2cons(float a, int tmax, float dt, float dx, float dy);


int main(){
  float dx=0.01;
  float dy=0.01;
  float dt=(dx*dy)/(4*0.0001);
  int tmax=10001;
  float a=(0.0001*dt)/(dx*dx);

  Caso1per(a, tmax, dt, dx, dy);
  Caso1abierto(a, tmax, dt, dx, dy);
  Caso1cons(a, tmax, dt, dx, dy);

  Caso2abierto(a, tmax, dt, dx, dy);
  Caso2per(a, tmax, dt, dx, dy);
  Caso2cons(a, tmax, dt, dx, dy);

  return 0;
}

/* CASO #1 ------------------------------------------------------------------------------------------------------------------------- */

void Caso1abierto(float a, int tmax, float dt, float dx, float dy)
{
  int i;
  int j;
  int t;
  float v=0.0001;
  float Matriz[101][101];     /* Se crea y se rellena la matriz que representa la placa */
  for(i=1;i<100;i++){
    for(j=1;j<100;j++){
      Matriz[i][j]=50;
    }
  }
  for(i=21;i<32;i++){
    for(j=41;j<62;j++){           /* Se imponen las condiciones de frontera */
      Matriz[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=1;i<100-2;i++){         /* Se realizan los calculos y se imprimen los valores obtenidos */
      Matriz[i][0]=Matriz[i][1];
      Matriz[i][100]=Matriz[i][99];
      Matriz[0][i]=Matriz[1][i];
      Matriz[100][i]=Matriz[99][i];
      for(j=1;j<98;j++){
	if(t==0){
	  printf("3, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==400){
	  printf("3, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==10000){
	  printf("3, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	Matriz[i][j]=(1-2*a-2*a)*Matriz[i][j] + a*(Matriz[i+1][j]+Matriz[i-1][j]) + Matriz*(Matriz[i][j+1]+Matriz[i][j-1]);
      }      
    }
  }
} 


void Caso1per(float a, int tmax, float dt, float dx, float dy)
{
  int i;
  int j;
  int t;
  float v=0.0001;
  float Matriz[101][101];     
  for(i=1;i<100;i++){
    for(j=1;j<100;j++){
      Matriz[i][j]=50;
    }
  }
  for(i=21;i<32;i++){
    for(j=41;j<62;j++){
      Matriz[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=1;i<98;i++){
      Matriz[i][0]=Matriz[i][99];
      Matriz[i][100]=Matriz[i][1];
      Matriz[0][i]=Matriz[99][i];
      Matriz[100][i]=Matriz[1][i];
      for(j=1;j<98;j++){
	if(t==0){
	  printf("2, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==400){
	  printf("2, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==10000){
	  printf("2, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	Matriz[i][j]=(1-2*a-2*a)*Matriz[i][j] + a*(Matriz[i+1][j]+Matriz[i-1][j]) + Matriz*(Matriz[i][j+1]+Matriz[i][j-1]);
      }      
    }
  }
} 

void Caso1cons(float a, int tmax, float dt, float dx, float dy)
{
  int i;
  int j;
  int t;
  float v=0.0001;
  float Matriz[101][101];
  for(i=1;i<100;i++){
    for(j=1;j<100;j++){
      Matriz[i][j]=50;
    }
  }
  for(i=21;i<32;i++){
    for(j=41;j<62;j++){
      Matriz[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=1;i<98;i++){
      Matriz[i][0]=50;
      Matriz[i][100]=50;
      Matriz[0][i]=50;
      Matriz[100][i]=50;
      for(j=1;j<98;j++){
	if(t==0){
	  printf("1, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==400){
	  printf("1, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==10000){
	  printf("1, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	Matriz[i][j]=(1-2*a-2*a)*Matriz[i][j] + a*(Matriz[i+1][j]+Matriz[i-1][j]) + Matriz*(Matriz[i][j+1]+Matriz[i][j-1]);
      }      
    }
  }
}  


/* CASO #2--------------------------------------------------------------------------------------------------------------------*/


void Caso2abierto(float a, int tmax, float dt, float dx, float dy)
{
  int i;
  int j;
  int t;
  float v=0.0001;
  float Matriz[101][101];
  for(i=1;i<100;i++){
    for(j=1;j<100;j++){
      Matriz[i][j]=50;
    }
  }
  for(i=21;i<32;i++){
    for(j=41;j<62;j++){
      Matriz[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=21;i<32;i++){
      for(j=41;j<62;j++){
	Matriz[i][j]=100;
      }
    }
    for(i=1;i<100-2;i++){
      Matriz[i][0]=Matriz[i][1];
      Matriz[i][100]=Matriz[i][99];
      Matriz[0][i]=Matriz[1][i];
      Matriz[100][i]=Matriz[99][i];
      for(j=1;j<98;j++){
	if(t==0){
	  printf("6, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==400){
	  printf("6, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==10000){
	  printf("6, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	Matriz[i][j]=(1-2*a-2*a)*Matriz[i][j] + a*(Matriz[i+1][j]+Matriz[i-1][j]) + a*(Matriz[i][j+1]+Matriz[i][j-1]);
      }      
    }
  }
}  

void Caso2per(float a, int tmax, float dt, float dx, float dy)
{
  int i;
  int j;
  int t;
  float v=0.0001;
  float Matriz[101][101];
  for(i=1;i<100;i++){
    for(j=1;j<100;j++){
      Matriz[i][j]=50;
    }
  }
  for(i=21;i<32;i++){
    for(j=41;j<62;j++){
      Matriz[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=21;i<32;i++){
      for(j=41;j<62;j++){
	Matriz[i][j]=100;
      }
    }
    for(i=1;i<100-2;i++){
      Matriz[i][0]=Matriz[i][99];
      Matriz[i][100]=Matriz[i][1];
      Matriz[0][i]=Matriz[99][i];
      Matriz[100][i]=Matriz[1][i];
      for(j=1;j<98;j++){
	if(t==0){
	  printf("5, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==400){
	  printf("5, %d ,%d ,%d, %f\n",t,i,j,Matriz[i][j] );
	}
	else if(t==10000){
	  printf("5, %d ,%d ,%d, %f\n",t,i,j,Matriz[i][j] );
	}
	Matriz[i][j]=(1-2*a-2*a)*Matriz[i][j] + a*(Matriz[i+1][j]+Matriz[i-1][j]) + a*(Matriz[i][j+1]+Matriz[i][j-1]);
      }      
    }
  }
} 


void Caso2cons(float a, int tmax, float dt, float dx, float dy)
{
  int i;
  int j;
  int t;
  float v=0.0001;
  float Matriz[101][101];
  for(i=1;i<100;i++){
    for(j=1;j<100;j++){
      Matriz[i][j]=50;
    }
  }
  for(i=21;i<32;i++){
    for(j=41;j<62;j++){
      Matriz[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=21;i<32;i++){
      for(j=41;j<62;j++){
	Matriz[i][j]=100;
      }
    }
    for(i=1;i<98;i++){
      Matriz[i][0]=50;
      Matriz[i][100]=50;
      Matriz[0][i]=50;
      Matriz[100][i]=50;
      for(j=1;j<98;j++){
	if(t==0){
	  printf("4, %d ,%d ,%d, %f\n",t,i,j, Matriz[i][j] );
	}
	else if(t==400){
	  printf("4, %d ,%d ,%d, %f\n",t,i,j,Matriz[i][j] );
	}
	else if(t==10000){
	  printf("4, %d ,%d ,%d, %f\n",t,i,j,Matriz[i][j] );
	}
	Matriz[i][j]=(1-2*a-2*a)*Matriz[i][j] + a*(Matriz[i+1][j]+Matriz[i-1][j]) + a*(Matriz[i][j+1]+Matriz[i][j-1]);
      }      
    }
  }
}

 
