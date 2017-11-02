// task2.cpp : Defines the entry point for the console application.
//


#include<iostream>

using namespace std;


int main()
{
	
	int i;
	int counter = 0;
	int sum = 0;
	double average = 0;


	do
	{
		cin >> i;
		if (i >= 1 && i <= 200)
		{
			sum += i;
			counter++;
		}

	average = sum / counter;

	} while (i>1);
	cout << counter << endl;
	cout << sum << endl;
	cout << average << endl;

	system("pause");

	return 0;
}
