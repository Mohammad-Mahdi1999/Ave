// In the name of God !
//Ave
//v1.2
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	double i, num,sum=0, Ave;
	cout << "Enter three numbers :" << endl;
	for (i = 1; i <= 3; i++) {
		cin >> num;
		sum = sum + num;
	}
	Ave = sum / 3;
	cout << "Average of these numbers is " << Ave << "!" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\