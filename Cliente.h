/**
 * Clase Cliente
 * 	Nombre del Cliente
 * 	Apellido del Cliente
 * 	Saldo
 * 	Número de Cliente
 * 	Getters / Setters
 * 	Constructor default
 * 		N/A
 * 		N/A
 * 		0.0
 * 		-1
 * 	toString()
 * 	Constructor con todos los parámetros
 * */

#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente
{
	private:
		string sNombre;
		string sApellido;
		double dSaldo;
		int iNumero;
	public:
		Cliente();
		Cliente(string, string, double, int);
		string getNombre();
		string getApellido();
		double getSaldo();
		int getNumero();
		void setNombre(string);
		void setApellido(string);
		void setSaldo(double);
		void setNumero(int);
		void toString();
};

Cliente::Cliente()
{
	sNombre = "N/A";
	sApellido = "N/A";
	dSaldo = 0.0;
	iNumero = -1;
}

Cliente::Cliente(string sN, string sA, double dS, int iN)
{
	sNombre = sN;
	sApellido = sA;
	dSaldo = dS;
	iNumero = iN;
}

string Cliente::getNombre()
{
	return sNombre;
}

string Cliente::getApellido()
{
	return sApellido;
}

double Cliente::getSaldo()
{
	return dSaldo;
}

int Cliente::getNumero()
{
	return iNumero;
}

void Cliente::setNombre(string sN)
{
	sNombre = sN;
}

void Cliente::setApellido(string sA)
{
	sApellido = sA;
}

void Cliente::setSaldo(double dS)
{
	dSaldo = dS;
}

void Cliente::setNumero(int iN)
{
	iNumero = iN;
}

void Cliente::toString()
{
	cout << "Nombre: " << sNombre << endl;
	cout << "Apellido: " << sApellido << endl;
	cout << "Saldo: " << dSaldo << endl;
	cout << "Numero: " << iNumero << endl;
}

#endif