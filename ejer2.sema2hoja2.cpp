
/* Realice una aplicación en C++ y entorno consola que teniendo como datos de entrada la
distancia a recorrer y el número de días de estancia, calcule el costo total de un Tour de
Viaje.
El precio por cada 100 KM de recorrido es de S/.150 y de cada día de estancia S/.520.
Por último si el monto total a pagar sobrepasa los S/.2500 existe un descuento del 35%.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	//declaracin de variables
	int numkm,diasestadia;
	int bloques100km;
	int pagokm,pagoest,totalpagar,totalcondsc;
	
	//entrada de datos
	cout<<"ingrese distancia: ";cin>>numkm;
	cout<<"ingrese dias de estancia: ";cin>>diasestadia;
	//proceso
	
	bloques100km=numkm/100+(numkm%100>0);
	pagokm=bloques100km*150;
	pagoest=diasestadia*520;
	totalpagar=pagokm+pagoest;
	totalcondsc=(totalpagar>2500)?totalpagar*(1-0.35):totalpagar;
	
	//salida
	cout<<"el pago es:"<<totalcondsc;
	_getch();
	
	
		
	
	
	
	
}
