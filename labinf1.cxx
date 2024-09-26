#include <iostream>

int main()
{
double x;
double y;
x = 1;
y = 1;
	while(x+y!=0)
	{
		std::cout << "Введите X: ";
		std::cin >> x;
		std::cout << "Введите Y: ";
		std::cin >> y;
		if ((y>=0) and (x>=0) and y<=(-(4/3)*x+4))
		{
			std::cout << "Точка попала" << std::endl;
		}
		else
		{
			std::cout << "Точка не попала" << std::endl;
		}		
	}	
	return 0;
}
