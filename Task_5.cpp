//Задача 16 J

#include <iostream>
#include <cmath>

int get_x()
{
	int x = 0;
	std::cout << "enter x:\n";
	std::cin >> x;
	return x;
}

void out_y(int y)
{
	std::cout << "y is " << y << "\n";
}

int main_func(int x)
{
	int y = 0;
	if (x > 5)
	{
		y = 3 * x - 5;
	}
	else if (x == 5)
	{
		y = 10;
	}
	else if (x < 5)
	{
		y = 2 * abs(x - 2) + 5;
	}
	return y;
}

int main()
{
	int x = get_x();
	int y = main_func(x);
	out_y(y);
}
