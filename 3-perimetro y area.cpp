#include <iostream>
using namespace std;
int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.10 calcula el area y el perimetro de un rectangulo" << "\n";
	
	float base, altura, area, perimetro;
	// Solicitar las medidas del rect�ngulo al usuario
	std::cout << "Ingrese la base del rect�ngulo: ";
	std::cin >> base;
	std::cout << "Ingrese la altura del rect�ngulo: ";
	std::cin >> altura;
	// Calcular el �rea y el perimetro
	area = base * altura;
	perimetro= 2 * (base + altura);
	// Mostrar los resultados
	std::cout << "El �rea del rect�ngulo es: " << area << std::endl;
	std::cout << "El per�metro del rect�ngulo es: " << perimetro << std::endl;
	return 0;
}
