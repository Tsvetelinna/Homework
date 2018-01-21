#include<iostream>
using namespace std;



int main()
{
	const int size = 50;
	char word[size];
	char symbol;

	
	cin.getline(word, size);
	cout << "Input the letter:";
	cin >> symbol;

	for (int i = 0; word[i] != '\0'; i++)
	{
		if (word[i] == symbol)
		{
			cout << i + 1<< endl;
			
		}
	}
	
    return 0;
}

