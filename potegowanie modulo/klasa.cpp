#include "stdafx.h"
#include "klasa.h"

int Klasa::powmodsimple(int a ,int b,int c)
{
	int g = a;
	
	a = a%c;
	//a do potegi b modulo c
	
	for (int i = 2; i <= b; i++)
	{
		a = (g * a) % c;
	}

	return a;
}

int Klasa::powmodfast(int a, int b, int c)
{
	int z = 0, g = 0;
	int temp = 0;
	int bin;

	while (b)
	{
		bin = (b % 2 ? 1 : 0);
		binary.push_back(bin);
		b = b / 2;
	}
	
	for (int i = 0; i < binary.size(); i++)
	{
		if (binary[i] == 1)
		{
			z = a%c;
			if (i == 0)
			{
				wyniki.push_back(z);
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					z = (z * z) % c;
				}
				wyniki.push_back(z);
			}
		}
			//cout <<"["<<i<<"]"<<"  "<<binary[i] << endl;
	}
	
	g = wyniki[0];
	
	for (int k = 1; k < wyniki.size(); k++)
	{
		g = g * wyniki[k];
	}
	/*for (int f = 0; f < wyniki.size(); f++)
	{
		cout << wyniki[f] << endl;
	}*/
	g = g%c;

	return g;
}