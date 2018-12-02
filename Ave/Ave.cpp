// In the name of God !
//Ave
//v1.7
#include "stdafx.h"
#include <iostream>
using namespace std;
void ave(double x, double y, double z)
{
	double ave;
	ave = (x + y + z) / 3;
	cout << "Average is " << ave;
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
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\