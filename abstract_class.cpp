#include<iostream>
class Animal
{
	public :
		virtual void sound() = 0;

		void Eat()
		{
			std::cout << "Eating Food...." << std::endl;
		}
};

class Dog : public Animal
{
	public :
		void sound() 
		{
		 	std::cout << "Dog says: Baooo!" << std::endl;
		}
};

class Cat : public Animal
{
	public :
		void sound()
		{
			std::cout << "Cat saya : Meow!" << std::endl;
		}
};

int main()
{
	Dog D1;
	Cat C1;

	D1.Eat();
	D1.sound();

	C1.Eat();
	C1.sound();

	return 0;
}
