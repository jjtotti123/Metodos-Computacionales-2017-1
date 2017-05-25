#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double long(double x0,double y0, double x1, double y1){
	double sq;
	sq=pow((pow(x0-x1,2))+(pow(y0-y1,2)),1/2);
	return sq;
}

double Ra(double x0,double y0, double xx, double yy){ 
	double D;
	double ratio=long(x0, y0, x[0], y[0]);
	for (int i=0; i<42;i++){
		D=long(x0, y0, x[i], y[i]);
		if(D<ratio){
			ratio=D;
		}
	}
	return (r-1);
}

int main(void){
	int i;
	int n_it=10000;
	int tam=42;
	double lh;
	double xx;
	double yy;
	double x0=0;
	double y0=0;
	double x2; 
	double y2;
	double r0; 
	double r2; 
	double dx=0.5; 
 
	FILE *dat;
	FILE *dat2;
	x=malloc(42*sizeof(double));
	y=malloc(42*sizeof(double));
	dat=fopen("Canal_ionico.txt","r");
	dat2=fopen("Canal_ionico1.txt","r");
	
	for(i=0;i<tam;i++){
		fscanf(data,"%lf %lf\n",&x[i],&y[i]);
	}
	r0=Ra(x0,y0,x,y);
	for(i=0; i<n_it;i++){
		
		x2=x0+(drand48()*2.0*paso)-dx;
		y2=y0+(drand48()*2.0*paso)-dx;
		r2=Ra(x2, y2,x,y); 
		lh=r2/r0;
		if (lh>1.0){
			x0=x2;
			y0=y2;
			r0=r2;
		}
	printf("%lf %lf %lf\n", x0,y0,r0);	
	}
	
	
}



