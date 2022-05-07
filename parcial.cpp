// parcial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "estudiante.h"
#include <iostream>
#include <mysql.h>

using namespace std;
int main()
{
	string nom, ape,dire,gen,email,fecha;
	int telefono;
	int carnet;

	cout << "Ingrese carnet: ";
	cin>> carnet;
	cout << "Ingrese nombre: ";
	getline(cin, nom);
	cout << "Ingrese apellido: ";
	getline(cin, ape);
	cout << "Ingrese direccion: ";
	getline(cin, dire);
	cout << "Ingrese genero: ";
	getline(cin, gen);
	cout << "Ingrese email: ";
	getline(cin, email);
	cout << "Ingrese fecha: ";
	getline(cin, fecha);
	cout << "Ingrese Telefono: ";
	cin >> telefono;
	cin.ignore();

	estudiante p = estudiante(nom, ape, dire, gen, email, fecha, telefono);

	p.crear();
	p.leer();
	p.actualizar();
	p.eliminar();

	system("pause");

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
