#include "FFNet.h"

FFNet::FFNet()
{
	alpha = 0.1f;
	theta = 0.2f;
	delta = 0.000001f;
	w1 = 0.5f , w2 = 0.9f , w3 = 0.4f, w4 = 1.0f, w5 = -1.2f, w6 = 1.1f;


	for (int p = 0; p < 64; p++)
	{
		int i = p % 4;
		int o = abs(i - 3);

		std::cout << "Epoch: " << p / 4 << std::endl;

		X = (x1[i] * w1) + (x2[o] * w2);
		X2 = (x1[o] * w3) + (x2[i] * w4);

		if (X >= theta)
		{
			h1 = 1;
			std::cout << "h1 = " << h1 << std::endl; 
		}
		else 
		{
			h1 = 0;
			std::cout << "h1 = " << h1 << std::endl;
		}

		e = h1d[i] - h1;
		w1 = w1 + alpha * x1[i] * e;
		std::cout << "New w1 = " << w1 << std::endl;
		w2 = w2 + alpha * x2[o] * e;
		std::cout << "New w2 = " << w2 << std::endl;

		if (X2 >= theta)
		{
			h2 = 1;
			std::cout << "h2 = " << h2 << std::endl;
		}
		else
		{
			h2 = 0;
			std::cout << "h2 = " << h2 << std::endl;
		}

		e2 = h2d[i] - h2;
		w3 = w3 + alpha * x1[o] * e2;
		std::cout << "New w3 = " << w3 << std::endl;
		w4 = w4 + alpha * x2[i] * e2;
		std::cout << "New w4 = " << w4 << std::endl;

		X3 = (h1 * w5) + (h2 * w6);

		if (X3 >= theta)
		{
			y = 1;
			std::cout << "y = " << y  << std::endl;
		}
		else
		{
			y = 0;
			std::cout << "y = " << y << std::endl;
		}

		e3 = Yd[i] - y;
		w5 = w5 + alpha * h1 * e3;
		std::cout << "New w5 = " << w5 << std::endl;
		w6 = w6 + alpha * h2 * e3;
		std::cout << "New w6 = " << w6 << "\n" << std::endl;

	}
}