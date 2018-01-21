#include<iostream>
#include<cstring>
using namespace std;

char* replaceAll(const char* text, const char* what, const char* with)
{
	int lenght = strlen(text);
	int lenght_what=strlen(what);
	int lenght_with=strlen(with);
	int lenght_diff = lenght_what - lenght_with;
	int lenght2 = lenght;


   for (int i = 0; i < lenght - lenght_what - 1; i++)
	{
		if (strncmp(what, &text[i], lenght_what) == 0)
		{
			lenght2+=lenght_diff;
			i += lenght_what - 1;
		}

	}


	char* text2 = new char[lenght2 +1];


	for (int i = 0, j = 0; i < lenght+1 ; i++, j++)
	{
		if (strncmp(what, &text[i], lenght_what) == 0)
		{
			strcpy(&text2[j], with);
			i += lenght_what - 1;
			j += lenght_with - 1;
		}
		else
		{
			text2[j] = text[i];
		}
	}

	return text2;
}

int main()
{
    const int size=15;
	char text[100];
	char word1[size];
	char word2[size];

    cout<<"Input the text"<<endl;
	cin.getline(text, 100);
	cin.getline(word1, size);
	cin.getline(word2, size);

    char *text2 = replaceAll(text, word1, word2);
	cout << text2;
    delete text2;

	return 0;
}
