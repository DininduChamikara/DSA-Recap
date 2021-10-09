// Sequential Search
#include<iostream>
using namespace std;

void printArr(int arr[], int length);
void sortArr(int arr[], int length);
int sequentialSearch(int arr[], int length, int num);

int main(){
	int num;
	int arr[] = {4,5,8,7,9,6,1,2,3,8,4,5};
	int length = sizeof(arr)/sizeof(arr[1]);
	
	printArr(arr, length);
	sortArr(arr, length);
	printArr(arr, length);
	cout<<"Enter the number : ";
	cin>>num;
	cout<<"\nThe position is "<<sequentialSearch(arr, length, num);
	
}

int sequentialSearch(int arr[], int length, int num){
	for(int i=0; i<length; i++){
		if(arr[i]==num){
			return i;
		}
	}
	return -1;
}

void printArr(int arr[], int length){
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sortArr(int arr[], int length){
	for(int i=0; i<length-1; i++){
		int index = i;
		for(int j=i; j<length; j++){
			if(arr[index]>arr[j]){
				index = j;
			}
			
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}
