// In the name of God !
//Ave
//v1.2
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	double i=1, num,sum=0, Ave;
	cout << "Enter three numbers :" << endl;
	while (i<=3)
	{
	cin >> num;
	sum = sum + num;
	i++;
	}
	Ave = sum / 3;
	cout << "Average of these numbers is " << Ave << "!" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\