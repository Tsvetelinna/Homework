#include<iostream>
using namespace std;

double PowertheNumber(int num, int pow)
{
	if (pow == 0)
	{
		return 1;
	}
	if (pow < 0)
	{
		return 1 / PowertheNumber(num, -pow);

	}

	
	return num * PowertheNumber(num, pow - 1);
}

int main()
{
	int number; 
	int power;
	cin >> number;
	cin >> power;
	cout << PowertheNumber(number, power) << endl;

	return 0;
}
