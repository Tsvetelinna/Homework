#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size][size];
	int sumofall = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int num = 0;

			cin >> num;
			if (num >= 10 && num <= 99)
			{
				arr[i][j] = num;
			}
			else
			{
				j--;
			}

		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < size; i++)
	{
		int sum = 0;

		for (int j = 0; j < size; j++)
		{

			if (arr[i][j] % 2 != 0)
			{
				sum += arr[i][j];
				cout << arr[i][j] << " ";
			}
		}

		cout << "sum = " << sum << endl;
		sumofall += sum;

	}

	cout << sumofall;

	system("Pause");

	return 0;
}
