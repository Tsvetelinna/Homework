#include<iostream>
using namespace std;

int Strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;

	}

	else
	{
		return 1 + Strlen(str + 1);
	}
}

int main()
{
	char word[20];

	cin.getline(word, 20);
	cout << Strlen(word) << endl;

	system("Pause");

	return 0;
