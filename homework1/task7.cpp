
#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;

	for (int i = num; i >= 10; i--)
	{
		if (i % 7 == 0)
		{
			cout << i << endl;
		
		}

	}

	system("pause");

	return 0;
}
