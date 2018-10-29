#include <iostream>
#include <math.h>

class FFNet
{
private:

	float y, X, X2, X3, theta, delta, alpha, e, w1, w2, w3, w4, w5, w6;

	float x1[4] = { 0, 0, 1, 1 };
	float x2[4] = { 0, 1, 0, 1 };
	float h1[4] = { 0 };
	float h2[4] = { 0 };
	float Yd[4] = { 0, 1, 1, 0 };

public:
	FFNet();
};