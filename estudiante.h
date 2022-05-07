#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include "conección.h"
using namespace std;
class estudiante
{
private: string carnet;

public:	string prov; string dir; string car; string ape; string gen; string ema; string nom; int tel;  string n;
	  
	  string nombre = nom;
	  string apellido = ape;
	  string direccion = dir;
	  int telefono = tel;
	  string genero = gen;
	  string email = ema;
	  string fecha = fecha;


	  void setCarnet(string n) { carnet = n; }
	  void setNombre(string prov) { nombre = nom; }
	  void setApellido(string ape) { apellido = ape; }
	  void setDireccion(string dir) { direccion = dir; }
	  void setTelefono(int tel) { telefono = tel; }
	  void setGenero(string gen) { genero = gen; }
	  void seteEmail(string ema) { genero = ema; }
	  void setfecha(string fecha) { fecha = fecha; }

	  

	  string getCarnet() { return carnet; }
	  string getNombre() { return nombre; }
	  string getApellido() { return apellido; }
	  string getDireccion() { return direccion; }
	  int getTelefono() { return telefono; }
	  string getGenero() { return genero; }
	  string getEmail() { return email; }
	  string getFecha() { return fecha; }


	  void crear() {
		  int q_estado;
		  conección cn = conección();

		  cn.abrir_conección();
		  string t = to_string(telefono);
		  if (cn.getConectar()) {
			  string  insertar = "INSERT INTO estudiante(nombres,apellido, direccion,telefono,genero,email,fecha) VALUES ('" + carnet + "','" + nombre + "','" + apellido + "','" + direccion + "','" + telefono + "','" + genero + "','" + email+"','" + fecha + "'," + t + ")";
			  const char* i = insertar.c_str();
			  // executar el query
			  q_estado = mysql_query(cn.getConectar(), i);
			  if (!q_estado) {
				  cout << "Ingreso Exitoso ..." << endl;
			  }
			  else {
				  cout << " xxx Error al Ingresar  xxx" << endl;
			  }
		  }
		  else {
			  cout << " xxx Error en la Conexion xxxx" << endl;
		  }
		  cn.cerrar_conexion();
	  }
	  void leer() {
		  int q_estado;
		  conección cn = conección();
		  MYSQL_ROW fila;
		  MYSQL_RES* resultado;
		  cn.abrir_conección();

		  if (cn.getConectar()) {

			  cout << "------------ Datos de estudiante ------------" << endl;
			  string consulta = "SELECT * FROM db_proveedor.proveedores";
			  const char* c = consulta.c_str();
			  q_estado = mysql_query(cn.getConectar(), c);
			  if (!q_estado) {
				  resultado = mysql_store_result(cn.getConectar());
				  while (fila = mysql_fetch_row(resultado)) {
					  cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << endl;
				  }

			  }
			  else {
				  cout << " xxx Error al Consultar  xxx" << endl;
			  }

		  }
		  else {
			  cout << " xxx Error en la Conexion xxxx" << endl;
		  }
		  cn.cerrar_conexion();
	  }

	  void actualizar() {
		  int q_estado;
		  conección cn = coneccion();

		  cn.abrir_conexion();
		  string id = to_string(id_estudiantes);
		  if (cn.getConectar()) {

			  string update = "UPDATE `db_estudiantes`.`estudiante` SET `id_estudiantes` = '', `nombre` = '', `apellido` = ``, `direccion` = ``, `telefono`=`` , `genero`=``,`email`=``,`fecha`=`` WHERE (`id_estudiantes` = '1')";

			  const char* i = update.c_str();

			  q_estado = mysql_query(cn.getConectar(), i);
			  if (!q_estado) {
				  cout << "INGRESADO CON EXITO .... \n";

			  }
			  else {
				  cout << "ERROR DE CONECCION.... \n";
			  }
		  }
		  else {
			  cout << "ERROR DE CONECCION.... \n";
		  }
		  cn.cerrar_conexion();
	  }

	  void eliminar() {
		  int q_estado;
		  conección cn = conección();
		  MYSQL_ROW fila = 0;
		  MYSQL_RES* resultado = 0;

		  cn.abrir_conexion();
		  string id = to_string(id_estudiantes);
		  if (cn.getConectar()) {

			  string delite = "DELETE FROM `db_estudiante`.`estudiante` WHERE (`id_estudiante` = ' ')";

			  const char* i = delite.c_str();

			  q_estado = mysql_query(cn.getConectar(), i);
			  if (!q_estado) {

				  cout << "ELIMINADO CON EXITO .... \n";

			  }
			  else {
				  cout << "ERROR DE CONECCION.... \n";
			  }
		  }
		  else {
			  cout << "ERROR DE CONECCION.... \n";
		  }
		  cn.cerrar_conexion();
	  }
};

