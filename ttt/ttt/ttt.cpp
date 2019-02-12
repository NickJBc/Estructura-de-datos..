// ttt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{

	float preciosd;
	float preciocd;

	cout << "precio del producto sin descuento: " << endl;
	do {

		cin >> preciosd;
	}
		while(preciosd < 0);

	preciocd = preciosd * 0.5;

	cout <<"precio con descuento : "<< preciocd;

}

