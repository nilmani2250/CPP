#include <iostream>

class Car 
{
	private:
		float fuel;
		int speed;
		int passenger;

		static int totalcar;

	public:
		// Constructor
		Car() 
		{
			fuel = 10.5;
			speed = 0;
			passenger = 1;

			totalcar++;
			std::cout << "TOTAL CAR: " << totalcar << std::endl;
		}

		// Destructor
		~Car() 
		{
			totalcar--;
			std::cout << "Destroyed: " << totalcar << std::endl;
		}

		void display() 
		{
			std::cout << "Fuel: " << fuel << std::endl;
			std::cout << "Speed: " << speed << std::endl;
			std::cout << "Passenger: " << passenger << std::endl;
		}

		// Static function to return total cars
		static int Totalcars() 
		{
			return totalcar;
		}
};

// Define static variable outside the class
int Car::totalcar = 0;

int main() 
{
	Car car1;
	Car car2;

	std::cout << "Total Cars: " << Car::Totalcars() << std::endl;

	return 0;
}

