#include<iostream>
class Car
{
	private:
		const int modelYear;

	public:
		Car(int Year) : modelYear(Year)
	{

	}
	
	void showModelYear()
	{
		std::cout << " Car Model Year " << modelYear << std::endl;
	}
};

int main()
{
	Car C1(2024);
	Car C2(2025);

	C1.showModelYear();
	C2.showModelYear();

	return 0;
}
