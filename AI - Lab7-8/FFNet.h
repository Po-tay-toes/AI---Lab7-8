#include <iostream>
#include <math.h>

class FFNet
{
private:

	float y, X, X2, X3, theta, delta, alpha, e, e2, e3, w1, w2, w3, w4, w5, w6, h1, h2;

	float x1[4] = { 0, 0, 1, 1 };
	float x2[4] = { 0, 1, 0, 1 };
	float Yd[4] = { 0, 1, 1, 0 };
	float h1d[4] = { 0, 0, 1, 0 };
	float h2d[4] = { 0, 1, 0, 0 };

public:
	FFNet();
};