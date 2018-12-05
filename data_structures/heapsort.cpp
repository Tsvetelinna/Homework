#include <iostream>
using namespace std;

void swap(int* a, int* b){ 

    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void heapHelper(int* arr, int size, int index) 
{ 
    int max = index; 
    int left = 2*index + 1; 
    int right = 2*index + 2; 
  
    if (left < size && arr[max] < arr[left]){

    	max = left; 
    } 
 
    if (right < size && arr[max] < arr[right]){

    	max = right; 
    } 
        
  
    if (index != max){

        swap(&arr[index], &arr[max]); 
  
        heapHelper(arr, size, max); 
    } 
}

void heapSort(int* arr, int size){

    
    for (int i = size/2 - 1; i >= 0; i--){

        heapHelper(arr, size, i); 
    }
  
    
    for (int i = size - 1; i > 0; i--){ 
       
        swap(&arr[0], &arr[i]); 
  
        heapHelper(arr, i, 0); 
    } 

} 



int main(){

	int size = 9;
	int arr[size] = {34, 32, 90, 1, 65, 78, 29, 32, 3};

	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

   heapSort(arr, size);

   for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
} 