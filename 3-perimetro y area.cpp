#include <iostream>
using namespace std;
int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.10 calcula el area y el perimetro de un rectangulo" << "\n";
	
	float base, altura, area, perimetro;
	// Solicitar las medidas del rectángulo al usuario
	std::cout << "Ingrese la base del rectángulo: ";
	std::cin >> base;
	std::cout << "Ingrese la altura del rectángulo: ";
	std::cin >> altura;
	// Calcular el área y el perimetro
	area = base * altura;
	perimetro= 2 * (base + altura);
	// Mostrar los resultados
	std::cout << "El área del rectángulo es: " << area << std::endl;
	std::cout << "El perímetro del rectángulo es: " << perimetro << std::endl;
	return 0;
}
