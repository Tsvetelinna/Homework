#include <iostream>
using namespace std;

bool isCorrect(int num)
{
	int temp=num;
	int sum=0;
	while(num>0)
	{
		sum+=num%10;
		num/=10;
	}

	if (temp%sum==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int number;
	cin>>number;

	cout<<boolalpha<<isCorrect(number);

	

	return 0;
}


