// Binary Search
#include<iostream>
using namespace std;

void printArr(int arr[], int length);
void sortArr(int arr[], int length);
int binarySearch(int arr[], int l, int r, int num);

int main(){
	int num;
	int arr[] = {4,5,9,8,7,5,6,2,1,4,3};
	int length = sizeof(arr)/sizeof(arr[1]);
	
	printArr(arr, length);
	sortArr(arr, length);
	printArr(arr, length);
	
	cout<<"Enter the number you want to search : ";
	cin>>num;
	
	
	cout<<"Number position is "<<binarySearch(arr, 0, length, num);
}

int binarySearch(int arr[], int l, int r, int num){
	int mp = (l+r)/2;
	if(l>r || r<0){
		return -1;
	}else if(arr[mp]==num){
		return mp;
	}else if(arr[mp]>num){
		binarySearch(arr, 0, mp-1, num);
	}else if(arr[mp]<num){
		binarySearch(arr, mp+1, r, num);
	}
}

// insertion sort
void sortArr(int arr[], int length){
	int key=0, j=0;
	for(int i=1; i<length; i++){
		key = arr[i];
		j = i-1;
		while(j>=0 && key<arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

void printArr(int arr[], int length){
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
