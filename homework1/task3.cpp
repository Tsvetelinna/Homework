
#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int count = 0;

	do
	{
		num /= 10;
		count++;

	} while (num != 0);

	cout << count;

    return 0;
}
