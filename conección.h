// parcial.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//

#include <iostream>
#include <mysql.h>

using namespace std;
int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "ups2022*", "db_estudiantes", 3306, NULL, 0);
    system("pause");
    return 0;
}

// Ejecutar programa: Ctrl + F5 o men� Depurar > Iniciar sin depurar
// Depurar programa: F5 o men� Depurar > Iniciar depuraci�n

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de c�digo fuente
//   3. Use la ventana de salida para ver la salida de compilaci�n y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de c�digo, o a Proyecto > Agregar elemento existente para agregar archivos de c�digo existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln


