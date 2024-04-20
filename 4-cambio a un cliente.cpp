#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.11 calcula el cambio que se le entrega a un cliente" << "\n";
	
	double _articulo;
	double cantidad_de_dinero,cambios;
	
	   printf("Ingrese el costo del articulo vendido: ");
	   scanf("%lf",&_articulo);
	   printf("Ingrese la cantidad de dinero entregado por el cliente: ");
	   scanf("%lf",&cantidad_de_dinero);
	   cambios=(cantidad_de_dinero-_articulo);
	   printf("El cambio que se debe entregar al cliente es de %f ",cambios );
	   
	printf("\nPresione una tecla para continuar...");
	getch();
	return 0;
	
}
