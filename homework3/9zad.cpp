#include<iostream>
#include<cstring>
using namespace std;

void Count(char* str)
{
	int arr[256];
	for (int i = 0; i < 256; i++)
	{
		arr[i] = 0;
	}

	int lenght = strlen(str);
  
	for (int i = 0; i < lenght; i++)
	{
		arr[str[i]]++;

	}

	for (int i = 0; i < 256; i++)
	{
		if (arr[i] > 0)
		{
			cout << "' "<<(char)(i) << " ' : " << arr[i] << endl;
		}

	}

}

int main()
{
	char text[100];

	cin.getline(text, 100);

	Count(text);


	system("Pause");


}
