#include <iostream>
#include <math.h>

class Peceptron
{
private:
	float e, Y, X, theta, alpha, delta, w1, w2;
	int x1[4] = { 0, 0, 1, 1 };
	int x2[4] = { 0, 1, 0, 1 };
	int Yd[4] = { 0, 0, 0, 1 };


public:
	Peceptron();
};