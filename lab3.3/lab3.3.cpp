// Lab_03_3.cpp
// Гордій Олег
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;
int main()
{
	
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі

	double k = tan(45 * PI / 180);
	
	if (x <= -7 - R)
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = R - sqrt(R * R - (x + 7) * (x + 7));
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = -1 / 4 * R * x;
				else
					if (0 < x && x <= PI)
						y = sin(x);
					else
							y = k * x - PI;
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
