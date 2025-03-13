#include<iostream>
class Base
{
	int &x;
	public:
	Base(int &a) : x{a}
	{

	}

	void print()
	{
		std::cout << x << std::endl;
	}
};
int main()
{
	int val = 100;
	Base B(val);

	B.print();

	return 0;
}
