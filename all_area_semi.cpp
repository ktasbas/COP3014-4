//M. Kaan Tasbas
//Due Date: 6/13/17
//Course: COP3014
//Assignment: 4
//Professor: Dr. Lofton Bullard

//Description: This program computes the area of an arbitrary triangle

#include <iostream>
#include <cmath>

using namespace std;

class triangle
{
public:
	double a;
	double b;
	double c;
	double area;
	double semiperimeter;
};

void Compute(triangle &);

void Compute(triangle & triangle1) {
	char input; //user input to continue if invalid triangle

	if (triangle1.a + triangle1.b > triangle1.c)
	{
		triangle1.semiperimeter = (triangle1.a + triangle1.b + triangle1.c) / 2;
		triangle1.area = sqrt(triangle1.semiperimeter*(triangle1.semiperimeter - triangle1.a)*(triangle1.semiperimeter - triangle1.b)*(triangle1.semiperimeter - triangle1.c));
	}
	else
	{
		cout << "This is not a valid triangle. Would you like to continue (y or n)?\n";
		cin >> input;
		if (input == 'y' || input == 'Y')
		{
			triangle1.semiperimeter = (triangle1.a + triangle1.b + triangle1.c) / 2;
			triangle1.area = sqrt(triangle1.semiperimeter*(triangle1.semiperimeter - triangle1.a)*(triangle1.semiperimeter - triangle1.b)*(triangle1.semiperimeter - triangle1.c));
		}
	}
}

void main()
{
	triangle triangle1;

	cout << "Please enter the three sides of the triangle\n";
	cin >> triangle1.a;
	cin >> triangle1.b;
	cin >> triangle1.c;

	Compute(triangle1);

	cout << "The semiperimeter of the triangle is " << triangle1.semiperimeter << endl;
	cout << "The area of the triangle is          " << triangle1.area << endl;
}