#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size][size];
	int sum2 = 0;
	int sum4 = 0;
	int sum6 = 0;
	
	

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int num = 0;

			cin >> num;
			if (num>=10 && num<=99)
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
		if (i == 1)
		{
		for (int j = 0; j < size; j++)
		{
			sum2 += arr[i][j];
			cout << arr[i][j] << " ";
		}

		cout <<"sum= "<< sum2<<endl;
		}

		if (i == 3)
		{
			for (int j = 0; j < size; j++)
			{
				sum4 += arr[i][j];
				cout << arr[i][j] << " ";
			}

			cout << "sum = " << sum4 << endl;
		}

		if (i == 5)
		{
			for (int j = 0; j < size; j++)
			{
				sum6 += arr[i][j];
				cout << arr[i][j] << " ";
			}

			cout << "sum = " << sum6 << endl;
		}
	}

	system ("Pause");

	return 0;
}
