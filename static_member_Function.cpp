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
                        std::cout << "Created Car: " << totalcar << std::endl;
                }

                // Destructor
                ~Car()
                {
                        totalcar--;
                        std::cout << "Destroyed: " << totalcar << std::endl;
                }


                // Static member function 
                static void Totalcars()
                {
            
                        std::cout << "TOTAL CAR: " << totalcar << std::endl;
                }
};

// Initialize static member variable
int Car::totalcar = 0;
int main()
{
        Car car1;
        Car car2;
	 Car::Totalcars();
        return 0;
}
            
