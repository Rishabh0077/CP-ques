#include <stdio.h>

using namespace std; 

void heapify(int arr[], int n, int i) 
{ 
	int largest = i;  
	int l = 2*i + 1; 
	int r = 2*i + 2;  
  int temp;
	 
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	 
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	 
	if (largest != i) 
	{ 
    temp = arr[largest];
    arr[largest] = arr[i];
    arr[i] = temp;  
		heapify(arr, n, largest); 
	} 
} 


void heapSort(int arr[], int n) 
{ 
  int temp;

	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 

	
	for (int i=n-1; i>0; i--) 
	{ 
		temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;

		
		heapify(arr, i, 0); 
	} 
} 

int main() 
{ 
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]);
  int i; 

	heapSort(arr, n); 

	for(i=0; i<n; i++){
    printf("%d ",arr[i]);
  }

} 
