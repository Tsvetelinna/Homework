#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	for(int i=1; ; i++)
	{
		int num = i*18;
		
		while(num>=10)
		{
			
			if (((num/10)%10)==(num%10))
			{
				num/=10;
			}
			
			else
			{
				break;
			}
		}

		if (num<10)
		{
			cout<<i;
			break;
		}
		
	}

	return 0;
}

