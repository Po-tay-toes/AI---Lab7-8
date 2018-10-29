#include "Peceptron.h"

Peceptron::Peceptron()
{
	alpha = 0.1f;
	theta = 0.2f;
	w1 = 0.3f;
	w2 = -0.1f;

	for (int p = 0; p < 20; p++)
	{
		int i = p % 4;
		std::cout << "i = " << i << std::endl;

		X = (x1[i] * w1) + (x2[i] * w2);
		std::cout << "X = " << X << std::endl;

		if (X >= theta)
		{
			Y = 1;
			std::cout << "Y = " << Y << std::endl;
		}
		else
		{
			Y = 0;
			std::cout << "Y = " << Y << std::endl;
		}

		e = Yd[i] - Y;
		std::cout << "e = " << e << std::endl;

		w1 = w1 + alpha * x1[i] * e;
		w2 = w2 + alpha * x2[i] * e;
		std::cout << "new w1 = " << w1 << std::endl;
		std::cout << "new w2 = " << w2 << "\n" << std::endl;

	}
}