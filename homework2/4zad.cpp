#include <iostream>
using namespace std;


int main()
{
	const int size = 105;
	int arr[size][2];
	int N = 0;

	cout << "Input number between 5 and 105." << endl;
	cin >> N;

	if (N < 5 || N > 105)
	{
		do
		{
			cout << "Input number between 5 and 105." << endl;
			cin >> N;
		} while (N < 5 || N > 105);

	}
	
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

			percent = (numerator * 100 / denominator);
		}

		cout << percent << " % " << endl;
	}




	system("Pause");

	return 0;
}
