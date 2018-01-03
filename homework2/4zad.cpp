#include<iostream>
using namespace std;

int main()
{
	const int size = 105;
	int arr[size][2];
	int N = 0;
	cin >> N;


	if (N >= 1 && N <= 105)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				int num;
				cin >> num;
				if (num >= 10 && num <= 99)
				{
					arr[i][j] = num;
				}
				else
				{
					j--;
				}
				cout << endl;
			}
		}

		for (int i = 0; i < N; i++)
		{
			int percent;

			int numerator;
			int denominator;

			for (int j = 0; j < 2; j++)
			{
				if (j == 0)
				{
					numerator = arr[i][j];
					cout << numerator << " / ";
				}
				if (j == 1)
				{
					denominator = arr[i][j];
					cout << denominator << " = ";
				}
				

				percent= (numerator * 100 / denominator) ;
			}


			cout << percent << " % " << endl;
		}

	}


	else
	{
		cout << "Error";

	}

	system("Pause");

	return 0;
}
