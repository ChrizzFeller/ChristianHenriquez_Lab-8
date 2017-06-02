//Clase binaria
#include <string>
#include <iostream>
#include <sstream>

#ifndef BINARIA_H
#define BINARIA_H

using namespace std;

class Binaria {

	private:
		int* numeros;

	public:
		Binaria();
		~Binaria();
		Binaria(int*);
		int* getNumeros();
		int getNumero(int);
		void setNumeros(int*);
		Binaria* operator+(Binaria*);
		Binaria* operator-(Binaria*);
		Binaria* operator*(Binaria*);
		Binaria* operator/(Binaria*);
		Binaria* operator^(Binaria*);
		string toString();
};
#endif