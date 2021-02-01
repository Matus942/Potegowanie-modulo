// potegowanie modulo.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "klasa.h"

int main()
{
	Klasa l;
	int p, g, a, b;
	a = 1024; b = 3048; p = 1933; g = 1000;
	int wynikA = 0;
	int wynikB = 0;
	int SwynikA = 0;
	int SwynikB = 0;

	cout << " Alicja :\n";
	cout << "p = " << p << endl; // liczba modulo
	cout << "g = " << g << endl; // liczba podniesiona do potegi
	cout << "a = " << a << endl; // potega Alicji

	cout << " Bob :\n";
	cout << "p = " << p << endl; // liczba modulo
	cout << "g = " << g << endl; // liczba podniesiona do potegi
	cout << "b = " << b << endl; // potega Boba

	wynikA = l.powmodsimple(g, a, p);
	wynikB = l.powmodsimple(g, b, p);

	SwynikA = l.powmodfast(g, a, p);
	SwynikB = l.powmodfast(g, b, p);

	int Ka = 0, Kb = 0, SKa = 0, SKb=0;

	cout << endl;
	cout << "A: " << wynikA << endl;
	cout << "B: " << wynikB << endl;
	cout << endl;
	
	Ka = l.powmodsimple(wynikB, a, p);
	Kb = l.powmodsimple(wynikA, b, p);

	SKa = l.powmodfast(wynikB, a, p);
	SKb = l.powmodfast(wynikA, b, p);

	cout << "metoda prosta: " << "Ka = " << Ka << " Kb = " << Kb << endl;

	cout << endl;
	
	cout <<"metoda szybka: "<< "Ka = " << Ka << " Kb = " << Kb << endl;
	//cout << l.powmodfast(6660, 1024, 2113) << endl;
	//cout << l.powmodsimple(6660, 1024, 2113) << endl;

	system("PAUSE");
    return 0;
}

