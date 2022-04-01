#include <iostream>
#include <cmath>

int main()
{
	system("cls");
	double n, a;
	std::cout << "What is the length of the side of your equillateral triangle\n";
	std::cin >> n;
	a = (pow(3, 0.5) * pow(n, 2)) / 4;
	std::cout << "Your Area is:\n" << a;
	return 0;
}
