
#include<iostream>

using namespace std;

int main() 
{
	int num = 0;
	cin >> num;
	int sum = 0;

	for (int i = 10; i <= num; i++)
	{
		int a, b;
		a = i % 10;
		b = (i / 10) % 10;

		sum+= a + b;
	}
	cout << sum;

	system("pause");

	return 0;
}
