#include<iostream>

class Car
{
	private :
		float fuel{10.5};
		int speed{0};
		int passenger{0};

	public :
		Car()
		{
			std::cout << "car" << std::endl;
		}

		void display()
		{
			std::cout << fuel << std::endl;
			std::cout << speed << std::endl;
			std::cout << passenger << std::endl;
		}
};
int main()
{
	Car CAR;
	CAR.display();

	return 0;
}

