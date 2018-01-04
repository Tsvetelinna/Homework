#include <iostream>
using namespace std;

bool isCorrect(int num)
{
	int temp = num;
	int sum = 0;
	while (num>0)
	{
		sum += num % 10;
		num /= 10;
	}

	if (temp%sum == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int number;

	cout << "Input number between 111 and 22222." << endl;
	cin >> number;

	if (number < 111 || number > 22222)
	{
		do
		{
			cout << "Input number between 111 and 22222." << endl;
			cin >> number;
		} while (number < 111 || number > 22222);

	}

	cout << boolalpha << isCorrect(number);



	return 0;
}


