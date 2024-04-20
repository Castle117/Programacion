#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
 using namespace std;
 
 int main()
 {
 	//Mensaje de bienvenida
 	cout << "Hola! Este programa 1.14 calcula la altura y el radio de un cilindro" << "\n";
 	
 	const double Pi = 3.141593;
 	double D, H, R, V;
 	printf("  **  CALCULO DEL VOLUMEN DE UN CILINDRO  **\n\n");
 	printf ("  Introduzca el diametro, en metros: ");
 	scanf (" %lf", &D);
 	printf ("\n  Introduzca la altura, en metros: ");
 	scanf (" %lf", &H);
 	R = D/2;
 	V = Pi * pow(R, 2) * H;
 	printf ("\n\n EL volumen del cilindro es de %lf metros cubicos", V);
 	return 0;
 }
