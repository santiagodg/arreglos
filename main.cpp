/**
 * Aplicación main
 * 	Declarar arreglo de 20 clientes
 * 	MENU
 * 	1. Agrega cliente nuevo (Pedir los datos de 1 cliente)
 * 	2. Mostrar datos del cliente dado un id (N. cliente)
 * 	3. Total a pagar de todos los clientes
 * 	4. Pagar deuda (N. cliente y el monto a pagar)
 * 	5. Finalizar
 * */

 #include <iostream>
 #include "Cliente.h"
 using namespace std;

int main()
{
	Cliente clientes[20];
	int iContadorClientes = 0, iNumero, iX;
	string sNombre, sApellido;
	double dSaldo;
	bool bClienteEncontrado;
	int iOpcion = -1;
	while (iOpcion != 5)
	{
		cout << endl;
		cout << "MENU" << endl;
		cout << "1. Agrega cliente nuevo" << endl;
		cout << "2. Mostrar datos de un cliente" << endl;
		cout << "3. Total a pagar de todos los clientes" << endl;
		cout << "4. Pagar deuda" << endl;
		cout << "5. Finalizar" << endl;
		cout << "Ingrese una opcion: ";
		cin >> iOpcion;
		cout << endl;
		switch(iOpcion)
		{
			case 1:
				if (iContadorClientes < 20)
				{
					cout << "Ingrese el nombre: ";
					cin >> sNombre;
					cout << "Ingrese el apellido: ";
					cin >> sApellido;
					cout << "Ingrese el saldo: ";
					cin >> dSaldo;
					cout << "Ingrese el numero: ";
					cin >> iNumero;
					do
					{
						bClienteEncontrado = false;
						for (iX = 0; iX < iContadorClientes; ++iX)
						{
							if (iNumero == clientes[iX].getNumero())
							{
								cout << "Ingrese otro numero: ";
								cin >> iNumero;
								bClienteEncontrado = true;
							}
						}
					} while (bClienteEncontrado);
					clientes[iContadorClientes].setNombre(sNombre);
					clientes[iContadorClientes].setApellido(sApellido);
					clientes[iContadorClientes].setSaldo(dSaldo);
					clientes[iContadorClientes].setNumero(iNumero);
					++iContadorClientes;
				}
				else
				{
					cout << "No es posible agregar clientes." << endl;
				}
				break;
			case 2:
			{
				cout << "Ingrese el numero de cliente: ";
				cin >> iNumero;
				bClienteEncontrado = false;
				for (iX = 0; iX < iContadorClientes; ++iX)
				{
					if (iNumero == clientes[iX].getNumero())
					{
						clientes[iX].toString();
						bClienteEncontrado = true;
					}
				}
				if (!bClienteEncontrado)
				{
					cout << "No se encontro cliente" << endl;
				}
				break;
			}
			case 3:
			{
				double dTotal = 0;
				for (iX = 0; iX < iContadorClientes; ++iX)
				{
					dTotal += clientes[iX].getSaldo();
				}
				cout << "Total: " << dTotal << endl;
				break;
			}
			case 4:
			{
				double dMonto;
				cout << "Ingrese el numero de cliente: ";
				cin >> iNumero;
				cout << "Ingrese el monto a pagar: ";
				cin >> dMonto;
				bClienteEncontrado = false;
				for (iX = 0; iX < iContadorClientes; ++iX)
				{
					if (iNumero == clientes[iX].getNumero())
					{
						bClienteEncontrado = true;
						dSaldo = clientes[iX].getSaldo();
						clientes[iX].setSaldo(dSaldo - dMonto);
					}
				}
				if (!bClienteEncontrado)
				{
					cout << "No se encontro cliente. " << endl;
				}
				break;
			}
			case 5:
				break;
		}
		cout << endl;
	}

	return 0;
}