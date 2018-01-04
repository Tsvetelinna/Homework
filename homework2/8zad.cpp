#include <iostream>
using namespace std;


int main()
{
	int num;
	int fib[40];
	fib[0] = 1;
	fib[1] = 1;

	cout << "Input number between 1 and 40." << endl;
	cin >> num;

	if (num < 1 || num > 40)
	{
		do
		{
			cout << "Input number between 1 and 40." << endl;
			cin >> num;
		} while (num < 1 || num > 40);

	}
	
	
	for (int i = 2; i <= num; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

	}

	cout << fib[num]<<endl;


	system("Pause");

	return 0;
}


