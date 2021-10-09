// Insertion Sort
#include<iostream>
using namespace std;

void printArr(int arr[], int length);
void sortArr(int arr[], int length);

int main(){
	int arr[] = {4,2,5,8,9,6,7,3,1,6,5,7};
	int length = sizeof(arr)/sizeof(arr[1]);
	
	printArr(arr, length);
	sortArr(arr, length);
	printArr(arr, length);
}

void printArr(int arr[], int length){
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sortArr(int arr[], int length){
	int key=0, j=0;
	
	for(int i=1; i<length; i++){
		key = arr[i];
		j = i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
