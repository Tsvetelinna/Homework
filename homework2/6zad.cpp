#include <iostream>
using namespace std;

bool isCorrect(int num)
{
	for(int i=2; i<=9; i++)
	{
		if(!(num%i==i-1))
		{
			return false;
		}
	}
	return true;
	
}
int main()
{
	int arr[4];
	for(int i=0; i<4; i++)
	{
		int j=(i==0)?1:arr[i-1]+1;
		for(j; ; j++)
		{
			if(isCorrect(j))
			{
				arr[i]=j;
				break;
			}
		}
		cout<<arr[i]<<endl;
	}

	return 0;
}


