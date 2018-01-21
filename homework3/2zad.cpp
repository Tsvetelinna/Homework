#include<iostream>
using namespace std;

int countofNum(char* str, int SIZE)
{	
	int countnum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			countnum++;
		}
	}
		
	return countnum;
}

int countofUpperletter(char* str, int SIZE)
{
	int countupper = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			countupper++;
		}
	}

	return countupper;
}

int countofLowerletter(char* str, int SIZE)
{
	int countlower = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			countlower++;
		}
	}

	return countlower;
}

int main()
{	
	
	const int size = 11;
	char word[size];

	cin.getline(word, size);

	cout << "numbers = " << countofNum(word, size) << endl;
	cout << "Upper Letter  = " << countofUpperletter(word, size) << endl;
	cout << "Lower Letter = " << countofLowerletter(word, size) << endl;



    return 0;
}


