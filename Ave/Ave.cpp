// In the name of God !
//Ave
//v2.0
#include "stdafx.h"
#include <iostream>
using namespace std;
void ave(double x, double y, double z)
{
	double ave;
	ave = (x + y + z) / 3;
	cout << "Average is " << ave << endl;
}
void main()
{
	double x, y, z;
	double Ave;
	cout << "Enter three numbers :" << endl;
	cout << "    ";
	cin >> x;
	cout << "    ";
	cin >> y;
	cout << "    ";
	cin >> z;
	cout << "__________" << "\n";
	ave(x, y, z);
	cout << "Press Enter key to exit . . .";
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\