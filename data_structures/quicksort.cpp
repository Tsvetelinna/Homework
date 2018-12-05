#include <iostream>
using namespace std;

void swap(int* a, int* b){ 

    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  

int quickHelper(int* arr, int first, int last){ 

    int pivot = arr[last]; 

    int counter = first - 1;   
  
    for (int i = first; i < last; i++){ 
        
        if (arr[i] < pivot){ 

            counter++;  

            swap(&arr[counter], &arr[i]); 
        } 
    } 

    swap(&arr[counter + 1], &arr[last]); 

    return (counter + 1); 
} 
  

void quickSort(int* arr, int firstIndex, int lastIndex){ 

    if(firstIndex < lastIndex){ 
     
        int pivot = quickHelper(arr, firstIndex, lastIndex); 

        quickSort(arr, firstIndex, pivot - 1); 
        quickSort(arr, pivot + 1, lastIndex); 
    } 
} 
  

int main(){

	int size = 8;
	int arr[size] = {34, 32, 90, 1, 65, 78, 29, 32};

	for(int i = 0; i < size; i++){

		cout<<arr[i]<<" ";
	}

	cout<<endl;

	quickSort(arr, 0, size - 1);


	for(int i = 0; i < size; i++){

		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}