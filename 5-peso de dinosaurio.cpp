#ifdef _MSDOS_
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
	//Mensaje de bienvenida
	cout <<"Hola! Este programa 1.12 expresa los datos de un dinosaurio" << "\n";
	
	float longitud_en_metros, longitud_en_pies, peso_en_kilogramos, peso_en_toneladas;
	char nombre_del_dinosaurio[63];
	cout << "Ingresa el nombre del dinosaurio: ";
	cin.get(nombre_del_dinosaurio, sizeof (nombre_del_dinosaurio), '\n');
	cin.get();
	cout << "Ingresa el valor de la longitud en pies: ";
	cin >> longitud_en_pies;
	cin.get();
	cout << "Ingresa el valor de peso en toneladas: ";
	cin >> peso_en_toneladas;
	cin.get();
	peso_en_kilogramos=peso_en_toneladas*1000;
	longitud_en_metros=longitud_en_pies*0.3048;
	cout << "Nombre del dinosaurio: " << nombre_del_dinosaurio << endl;
	cout << "Valor de longitud en metros: " << longitud_en_metros << endl;
	cout <<"Valor de peso en kilogramos: " << peso_en_kilogramos << endl;
	cout <<endl;
	system ("pause");
	return EXIT_SUCCESS;
}
