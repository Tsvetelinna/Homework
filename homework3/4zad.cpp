#include<iostream>
#include<cstring>
using namespace std;

void longerWord(char* str1, char* str2)
{
	cout << "Longer word is:" << endl;
	
	int lenght1 = strlen(str1);
	int lenght2= strlen(str2);
	
	if (lenght1 > lenght2)
	{
		cout << str1 << endl;
		cout << lenght1 << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << str2[i];

		}

		for (int j = 5; j <= lenght1; j++)
		{
				
			cout<<str1[j];
		}
	}

	else if (lenght2 > lenght1)
	{
		cout << str2 << endl;
		cout << lenght2 << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << str1[i];

		}

		for (int j = 5; j <= lenght2; j++)
		{

			cout << str2[j];
		}
	}
	else
	{
		cout << "The words are with equal number of  letter" << endl;
	}
}

int main()
{
	const int size = 21;
	char word1[size];
	char word2[size];
	cin.getline(word1, size);
	cin.getline(word2, size);

	longerWord(word1, word2);

    return 0;
}
