#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int guests, capacity;
	cin >> guests >> capacity;
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
