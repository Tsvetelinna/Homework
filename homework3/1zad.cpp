#include<iostream>
using namespace std;

char toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	return c;
}

int main()
{
	char letter;

	cin >> letter;

	cout << toUpper(letter) << endl;

    return 0;
}
