#include <iostream>
using namespace std;


int main()
{
	int num;
	int numberofzeros;
	int bin[20]; //Числото един милион в двуичен запис съдържа 20 позиции, от което следва, че няма да се събере в числен тип. Затова ще използвам масив от 20 елемента.
	int count = 0;
	int maxzeros = 0;
	int current = 0;

	cout << "Input number between 1000 and 1 000 000.";
	cin >> num;

	if (num < 1000 || num > 1000000)
	{
		do
		{
			cout << "Input number between 1000 and 1 000 000." << endl;
			cin >> num;
		} while (num < 1000 || num > 1000000);

	}


	cin >> numberofzeros;

	while (num > 0)
	{
		bin[count] = num % 2;
		num /= 2;
		count++;
	}


	for (int i = 0; i<count; i++)
		{
			if (bin[i] == 0)
			{
				current++;
			}
			else
			{
				if (current > maxzeros)
				{
					maxzeros = current;
				}

				current = 0;
			}
		}

		if (maxzeros == numberofzeros || maxzeros>numberofzeros)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	

	
	return 0;
}
