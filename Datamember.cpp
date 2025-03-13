#include<iostream>
class point
{
	public:
		int x;
		int y;

		point()
		{

		}
		point(int a ,int b) {x = a; y = b;}
};
int main()
{
	point p1(10,20);
	point p2(20,30);

	std::cout << p1.x << " " << p1.y << std::endl;
	std::cout << p2.x << " " << p2.y << std::endl;

	return 0;
}
