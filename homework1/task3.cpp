// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int count = 0;

	do
	{
		if (num>0)
		{
			count++;
		}
		num /= 10;

	} while (num != 0);

	cout << count;

    return 0;
}
