#include "iostream"
#include "string"
#include "math.h"

using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.8 imprime la matricula y el promedio de 5 notas de un alumno" << "\n";
	
	float matricula, a, b, c, d, e;
	
	cout<<"Introduzca el numero de matricula del alumno: ";
 	cin>>matricula;
 	
 	cout<<"Introduzca la primera calificacion: ";
 	cin>>a;
 	
 	cout<<"Introduzca la segunda calificacion: ";
 	cin>>b;
 	
 	cout<<"Introduzca la tercera calificacion: ";
 	cin>>c;
 	
 	cout<<"Introduzca la cuarta calificacion: ";
 	cin>>d;
 	
 	cout<<"Introduzca la quinta calificacion: ";
 	cin>>e;
 	
	cout<<"La matricula del alumno es  " <<matricula<<endl;
 	
 	cout<<"El promedio es: "<<((a+b+c+d+e)/5)<<endl;
 	
 	cin.get();cin.get();
 	
return 0;
}

