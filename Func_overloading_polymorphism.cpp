#include<iostream>
class A
{
	public:
		void VVDN(int a, int b)
		{
			std::cout << a * b << std::endl;
		}

		void VVDN( int a ,int b ,int c ,int d)
		{
			std::cout << (a+b+c+d) << std::endl;
		}

		void VVDN( double a, double b)
		{
			std::cout << a * b << std::endl;
		}

};
int main()
{
	A B;
	B.VVDN(20,20);
	B.VVDN(10, 11,12,13);
	B.VVDN(7.6, 6.5);

	return 0;
}
