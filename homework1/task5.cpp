
#include<iostream>

using namespace std;

int main()
{
	for (int i = 100; i <= 999; i++)
	{
		int a, b, c;
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;

		if (a != b && a != c && b != c)
		{
			cout << i << endl;
		}
	}


	system("pause");

	return 0;
}
