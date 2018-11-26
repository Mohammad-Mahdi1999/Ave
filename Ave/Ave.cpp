// In the name of God !
//Ave
//v1.7
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int i = 0, num[50], sum = 0;
	double Ave;
	cout << "Enter three numbers :" << endl;
	while (i<3)
	{
	cin >> num[i];
	i++;
	}
	for (i = 0; i < 3; i++)
		sum = num[i] + sum;
	Ave=sum / 3;
	cout << "Average of these numbers is " << Ave << "!" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\