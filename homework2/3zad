#include<iostream>
using namespace std;

int main()
{
	int R, K;
	const int SIZE1 = 100;
	const int SIZE2 = 100;
	int arr1[SIZE1][SIZE2] = { { 11, 17, 4, 10 },{ 29, 4, 18, 18 },{ 22, 14, 5, 5 } };
	int arr2[SIZE1][SIZE2] = { { 1, 1, 1, 1 },{ 1, 1, 1, 1 },{ 1, 1, 1, 1 } };
	int arr3[SIZE1][SIZE2];
	int sum = 0;

	R = 3;
	K = 4;

	if (R >= 3 && R <= 10 && K >= 3 && K <= 10)
	{

	
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < K; j++)
			{
				cout << arr1[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < K; j++)
			{
				cout << arr2[i][j] << " ";
				sum += arr2[i][j];
			}
			cout << endl;
		}
		
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < K; j++)
			{
				arr3[i][j] = arr1[i][j] * sum;
				cout << arr3[i][j] << " ";
			}
			cout << endl;
		}
	}


	else
	{
		cout << "Error";
	}




	system("Pause");

	return 0;
}
