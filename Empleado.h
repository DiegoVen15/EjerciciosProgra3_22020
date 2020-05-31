#pragma once

#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

class Empleado
{
public:
	Empleado(const std::string&, const std::string&, const std::string&);
	virtual ~Empleado() {}//destructor virtual

	void establecerPrimerNombre(const std::string&); //Establece el primer nombre
	std::string obtenerPrimerNombre()const; //Devuelve el primer nombre

	void establecerApellidoPaterno(const std::string&); //Establece el apellido paterno
	std::string obtenerApellidoPaterno()const; //Devuelve el apellido paterno

	void establecerNumeroSeguroSocial(const std::string&); //Establece el Nss
	std::string obtenerNumeroSeguroSocial()const; //Devuelve el Nss

	//La funcion virtual pura hace de Empleado una clase base abstracta
	virtual double ingresos() const = 0; //virtual pura
	virtual void imprimir() const; //virtual

private:
	std::string primerNombre;
	std::string apellidoPaterno;
	std::string numeroSeguroSocial;
};//Fin de la clase Empleado
#endif // !EMPLEADO_H
