#pragma once
#ifndef KLASA_H
#define KLASA_H

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Klasa
{
private:
	int a, b, c;
	vector<int>binary;
	vector<int>wyniki;

public:
	int powmodsimple(int, int, int);
	int powmodfast(int, int, int);
};


#endif

