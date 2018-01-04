#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int guests, capacity;

	cout << "Input guests between 40 and 10040." << endl;
	cin >> guests;
	if (guests < 40 || guests > 10040)
	{
		do
		{
			cout << "Input guests between 40 and 10040." << endl;
			cin >> guests;
		} while (guests < 40 || guests > 10040);
	}

	cout << "Input capacity of rooms between 10 and 20." << endl;
	cin >> capacity;
	if (capacity < 10 || capacity > 20)
	{
		do
		{
			cout << "Input capacity of rooms between 10 and 20." << endl;
			cin >> capacity;
		} while (capacity < 10 || capacity > 20);
	}

	int rooms = ceil(float(guests) / capacity);
	int counter1 = guests%rooms;
	int counter2 = rooms - guests%rooms;

	while (counter1> 0)
	{
		cout << guests / rooms + 1 << endl;
		counter1--;
	}

	while (counter2 > 0)
	{
		cout << guests / rooms << endl;
		counter2--;
	}



	return 0;
}
