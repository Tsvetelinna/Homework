#include <iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;

	int fib[41];
	fib[0]=1;
	fib[1]=1;

	for (int i=2; i<=num; i++)
	{
		fib[i]=fib[i-1]+fib[i-2];		
				
	}

	cout<<fib[num];


	return 0;
}

