// Bubble Sort
#include <iostream>
using namespace std;

void printArr(int arr[], int length);
void sortArr(int arr[], int length);
void swap(int arr[], int index);

int main(){
	int arr[] = {4,5,9,8,7,6,2,3,1,5,7,9,8,6,4};
	int arrLength = sizeof(arr)/arr[0];
	
	printArr(arr, arrLength);
	sortArr(arr, arrLength);
	cout<<endl;
	printArr(arr, arrLength);
	
}

void printArr(int arr[], int length){
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
}

void sortArr(int arr[], int length){
	for(int i=0; i<length-1; i++){
		for(int j=0; j<length-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr, j);
			}
		}
	}
}

void swap(int arr[], int index){
	int temp = arr[index];
	arr[index] = arr[index+1];
	arr[index+1] = temp;
}


