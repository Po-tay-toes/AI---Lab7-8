#include "FFNet.h"

FFNet::FFNet()
{
	alpha = 0.1f;
	theta = 0.2f;
	delta = 0.000001f;
	w1 = 0.1f , w2 = 0.1f , w3 = 0.1f, w4 = 0.1f, w5 = 0.2f, w6 = 0.2f;

	for (int p = 0; p < 20; p++)
	{
		int i = p % 4;
		int o = abs(i - 3);

		std::cout << "Epoch: " << p / 4 << std::endl;

		X = (x1[i] * w1) + (x2[o] * w2);
		X2 = (x1[o] * w3) + (x2[i] * w4);

		if (X >= theta)
		{
			h1[i] = 1;
			std::cout << "h1 = " << h1[i] << std::endl; 
		}
		else 
		{
			h1[i] = 0;
			std::cout << "h1 = " << h1[i] << std::endl;
		}

		if (X2 >= theta)
		{
			h2[i] = 1;
			std::cout << "h2 = " << h2[i] << std::endl;
		}
		else
		{
			h2[i] = 0;
			std::cout << "h2 = " << h2[i] << std::endl;
		}

		X3 = (h1[i] * w5) + (h2[i] * w6);

		if (X3 >= theta)
		{
			y = 1;
			std::cout << "y = " << y  << "\n" << std::endl;
		}
		else
		{
			y = 0;
			std::cout << "y = " << y << "\n" << std::endl;
		}

		/*
		e = Yd[i] - y;
		std::cout << "e = " << e << std::endl;

		w1 = w1 + alpha * x1[i] * e;
		std::cout << "new w1 = " << w1 << std::endl;
		w2 = w2 + alpha * x1[i] * e;
		std::cout << "new w2 = " << w2 << std::endl;
		w3 = w3 + alpha * x1[i] * e;
		std::cout << "new w3 = " << w3 << std::endl;
		w4 = w4 + alpha * x1[i] * e;
		std::cout << "new w4 = " << w4 << std::endl;
		w5 = w5 + alpha * x1[i] * e;
		std::cout << "new w5 = " << w5 << std::endl;
		w6 = w6 + alpha * x1[i] * e;
		std::cout << "new w6 = " << w6 << "\n" << std::endl;
		*/

	}
}