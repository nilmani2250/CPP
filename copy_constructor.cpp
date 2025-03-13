#include<iostream>
class Car
{
	private:
		float fuel;
		int speed;
		int passenger;


	public:

		Car(float f, int s, int p)
		{

			fuel = f;
			speed = s;
			passenger = p;

			std::cout << "Car created" << std::endl;

		}

		// copy constructor

		Car(const Car &source)
		{
			fuel = source.fuel;
			speed = source.speed;
			passenger = source.passenger;

			std::cout << "Car copied:" << std::endl;
		}

		void display()
		{
			std::cout << "Fuel:" << fuel << std::endl;
			std::cout << "Speed:" << speed << std::endl;
			std::cout << "Passenger:" << passenger << std::endl;
		}
};

int main()
{

	Car car1(50.5, 60, 5);
	Car car2 = car1;

	std::cout << "Original car" << std::endl;
	car1.display();

	return 0;
}
