#include "Binaria.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Binaria::Binaria() {
}

Binaria::Binaria(int* arr) {
	this->numeros = arr;
}

Binaria::~Binaria() {

}

int* Binaria::getNumeros() {
	return numeros;
}

int Binaria::getNumero(int pos) {
	return numeros[pos];
}

void Binaria::setNumeros(int* arr) {
	numeros = arr;
}

Binaria* Binaria::operator+(Binaria* temp) {
	int suma;
	Binaria* temp2 = new Binaria();
	int* nums = new int[4];
	int* listanum2 = temp -> getNumeros();
	for (int i = 0; i < 4; ++i)
	{
		suma = numeros[i] + listanum2[i];
		if (suma == 0 || suma == 1) {
			nums[i] = 0;
		} else {
			nums[i] = 1;
		}
	}
	temp2 -> setNumeros(nums);
	return temp2;
}

Binaria* Binaria::operator-(Binaria* temp) {
	int resta;
	Binaria* temp1 = new Binaria();
	int* nums = new int[4];
	int* listanum2 = temp -> getNumeros();
	for (int i = 0; i < 4; ++i)
	{
		resta = numeros[i] + listanum2[i];
		if (resta == 0) {
			nums[i] = 0;
		} else {
			nums[i] = 1;
		}
	}
	temp1 -> setNumeros(nums);
	return temp1;
}

Binaria* Binaria::operator*(Binaria* temp) {
	Binaria* temp3 = new Binaria();
	int* nums = new int[4];
	int* listanum2 = temp -> getNumeros();
	for (int i = 0; i < 4; ++i)
	{
		if (numeros[i] == 0 && listanum2[i] == 1) {
			nums[i] = 1;
		} else {
			nums[i] = 0;
		}
	}
	temp3 -> setNumeros(nums);
	return temp3;
}

Binaria* Binaria::operator/(Binaria* temp) {
	Binaria* temp4 = new Binaria();
	int* nums = new int[4];
	int* listanum2 = temp -> getNumeros();
	for (int i = 0; i < 4; ++i)
	{
		if (numeros[i] == listanum2[i]) {
			nums[i] = 0;
		} else {
			nums[i] = 1;
		}
	}
	temp4 -> setNumeros(nums);
	return temp4;
}

Binaria* Binaria::operator^(Binaria* temp) {
	Binaria* temp5 = new Binaria();
	int* nums = new int[4];
	int* listanum2 = temp -> getNumeros();
	for (int i = 0; i < 4; ++i)
	{
		if (numeros[i] == listanum2[i]) {
			nums[i] = 1;
		} else {
			nums[i] = 0;
		}
	}
	temp5 -> setNumeros(nums);
	return temp5;
}

string Binaria::toString() {
	stringstream ss;
	for (int i = 0; i < 4; i++)
	{
		if (numeros[i] == 0)
		{
			ss << "0" << endl;
		} else {
			ss << "1" << endl;
		}
	}
	return ss.str();
}