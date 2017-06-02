#include <iostream>
#include <vector>
#include <string>
#include "Binaria.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//int llenar();

int main() {
	srand(time(NULL));
	vector <Binaria*> vect;
	bool seguir = true;
	int bin1, bin2;
	while (seguir == true) {
		int resp;
		cout << "---Menu---" << endl;
		cout << "1) Crear Binario" << endl;
		cout << "2) Disyuncion" << endl;
		cout << "3) Conjuncion " << endl;
		cout << "4) Implicacion " << endl;
		cout << "5) Doble Implicacion " << endl;
		cout << "6) Disyuncion Exclusiva" << endl;
		cout << "7) Salir" << endl;
		cin >> resp;
		while (resp < 1 || resp > 7) {
			cout << "Opcion invalida! Ingrese su opcion de nuevo!" << endl;
			cin >> resp;
		}
		if (resp == 1)
		{
			int* arregloN = new int[4];
			for (int i = 0; i < 4; ++i)
			{
				arregloN[i] = rand() % 2;
			}
			vect.push_back(new Binaria(arregloN));
			cout << "Binario creado exitosamente!" << endl;
		} else if (resp == 2 && vect.size() >= 2)
		{
			cout << "Eliga los binarios a usar: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") ";
				for (int j = 0; j < 4; ++j)
				{
					cout << "[" << vect.at(i) -> getNumero(j) << "] ";
				}
				cout << endl;
			}
			cin >> bin1;
			while (bin1 < 0 || bin1 > vect.size()) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin1;
			}
			cin >> bin2;
			while (bin2 < 0 || bin2 > vect.size() || bin2 == bin1) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin2;
			}
			Binaria* bin3 = new Binaria();
			bin3 = *vect.at(bin1) + vect.at(bin2);
			cout << "El resultado es: " << endl;
			int* arregloA = bin3 -> getNumeros();
			for (int i = 0; i < 4; ++i)
			{
				cout << "[" << arregloA[i] << "]" << endl;
			}
		} else if (resp == 3 && vect.size() >= 2)
		{
			cout << "Eliga los binarios a usar: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") ";
				for (int j = 0; j < 4; ++j)
				{
					cout << "[" << vect.at(i) -> getNumero(j) << "] ";
				}
				cout << endl;
			}
			cin >> bin1;
			while (bin1 < 0 || bin1 > vect.size()) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin1;
			}
			cin >> bin2;
			while (bin2 < 0 || bin2 > vect.size() || bin2 == bin1) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin2;
			}
			Binaria* bin3 = new Binaria();
			bin3 = *vect.at(bin1) - vect.at(bin2);
			cout << "El resultado es: " << endl;
			int* arregloA = bin3 -> getNumeros();
			for (int i = 0; i < 4; ++i)
			{
				cout << "[" << arregloA[i] << "]" << endl;
			}
		} else if (resp == 4 && vect.size() >= 2)
		{
			cout << "Eliga los binarios a usar: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") ";
				for (int j = 0; j < 4; ++j)
				{
					cout << "[" << vect.at(i) -> getNumero(j) << "] ";
				}
				cout << endl;
			}
			cin >> bin1;
			while (bin1 < 0 || bin1 > vect.size()) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin1;
			}
			cin >> bin2;
			while (bin2 < 0 || bin2 > vect.size() || bin2 == bin1) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin2;
			}
			Binaria* bin3 = new Binaria();
			bin3 = *vect.at(bin1) * vect.at(bin2);
			cout << "El resultado es: " << endl;
			int* arregloA = bin3 -> getNumeros();
			for (int i = 0; i < 4; ++i)
			{
				cout << "[" << arregloA[i] << "]" << endl;
			}
		} else if (resp == 5 && vect.size() >= 2)
		{
			cout << "Eliga los binarios a usar: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") ";
				for (int j = 0; j < 4; ++j)
				{
					cout << "[" << vect.at(i) -> getNumero(j) << "] ";
				}
				cout << endl;
			}
			cin >> bin1;
			while (bin1 < 0 || bin1 > vect.size()) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin1;
			}
			cin >> bin2;
			while (bin2 < 0 || bin2 > vect.size() || bin2 == bin1) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin2;
			}
			Binaria* bin3 = new Binaria();
			bin3 = *vect.at(bin1) / vect.at(bin2);
			cout << "El resultado es: " << endl;
			int* arregloA = bin3 -> getNumeros();
			for (int i = 0; i < 4; ++i)
			{
				cout << "[" << arregloA[i] << "]" << endl;
			}
		} else if (resp == 6 && vect.size() >= 2) {
			cout << "Eliga los binarios a usar: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") ";
				for (int j = 0; j < 4; ++j)
				{
					cout << "[" << vect.at(i) -> getNumero(j) << "] ";
				}
				cout << endl;
			}
			cin >> bin1;
			while (bin1 < 0 || bin1 > vect.size()) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin1;
			}
			cin >> bin2;
			while (bin2 < 0 || bin2 > vect.size() || bin2 == bin1) {
				cout << "Opcion invalida, ingrese opcion de nuevo!" << endl;
				cin >> bin2;
			}
			Binaria* bin3 = new Binaria();
			bin3 = *vect.at(bin1) ^ vect.at(bin2);
			cout << "El resultado es: " << endl;
			int* arregloA = bin3 -> getNumeros();
			for (int i = 0; i < 4; ++i)
			{
				cout << "[" << arregloA[i] << "]" << endl;
			}
		} else if (resp == 7)
		{
			seguir = false;
			cout << "Nos vemos luego!" << endl;
		} else {
			cout << "No hay suficientes binarios!" << endl;
		}
		cout << endl;
	}
	return 0;
}