// зад1.cpp : Defines the entry point for the console application.
//


#include<iostream>

using namespace std;


int main()
{
	int num = 0;
	cin >> num;
	int counter = 0;
	int sum = 0;


	do
	{
		int i;
		cin >> i;
		if (i >= 10 && i <= 5555)
		{
			sum += i;
			counter++;
		}

	} while (counter < num);

	cout << sum;

	system("pause");

	return 0;
}

