#include<iostream>
class overload
{
	private:
		int num1;
		int num2;

	public:
		overload(int n1, int n2)
		{
			int result;
			num1 = n1;
			num2 = n2;

			result = num1 - num2;
			std::cout << "Result:" << result << std::endl;
		}

		void operator-()
		{
			num1 = -num1;
			num2 = -num2;
		}

		void display()
		{
			std::cout << "Number1: " <<num1 << std::endl;
			std::cout << "Number2: " <<num2 << std::endl;
		}
};
int main()
{
	overload obj1(100,20);
	-obj1;
	obj1.display();
	return 0;
}

