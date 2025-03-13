#if 0
#include<iostream>
class Car
{
	private:
		float fuel;
		int speed;
		int passenger;

	
	public :

		Car(float f, int s, int p) : fuel(f), speed(s), passenger(p) {}

		void display() const
		{
			std::cout << "Fuel: " << fuel << std::endl;
			std::cout << "speed: " << speed << std::endl;
			std::cout << "passenger: " << passenger << std::endl;
		}



		void accelerate()
		{
			speed += 10;
			std::cout << "New speed:" << speed << std::endl;
		}
};


int main()
{


const Car car1(12.5, 40, 5);

car1.display();

Car car2(10.5, 50, 4);
car2.accelerate();

return 0;
}
#endif


#include<iostream>
class Base
{
	mutable int x;
	public :
	Base() { }
	Base(int a):x{a} { }
	void setX(int a) 
	{
		x = a;
	}
	int getX() const { x = 200; return x;}
};

int main()
{
	Base B;
	B.setX(100);

	std::cout << B.getX() << std::endl;

	return 0;
}
