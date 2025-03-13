#include<iostream>
class Base
{
	public :
		int x;
		static int y;
};
int Base::y;

int main()
{
	Base B1;
	B1.x = 100;
	B1.y = 200;

	Base B2;
	B2.x = 300;
	B2.y = 400;

	std::cout << B1.x << std::endl;
	std::cout << B1.y << std::endl;
	std::cout << B2.x << std::endl;
	std::cout << B2.y << std::endl;

	return 0;
}
