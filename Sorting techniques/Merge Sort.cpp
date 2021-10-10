// There is an Issue with this code so do not generate correct result
// Merge Sort
#include<iostream>
using namespace std;

void printArr(int arr[], int length);
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int mp, int r);

int main(){
	int arr[] = {4,5,8,9,7};
	int length = sizeof(arr)/sizeof(arr[1]);
	
	printArr(arr, length);
	mergeSort(arr, 0, length -1);
	printArr(arr, length);
}

void mergeSort(int arr[], int l, int r){
	if(l>=r){
		return;
	}
	int mp = (l+r)/2;
	mergeSort(arr, l, mp);
	mergeSort(arr, mp+1, r);
	merge(arr, l, mp, r);
}

void merge(int arr[], int l, int mp, int r){
	int n1 = mp-l+1;
	int n2 = r-mp;
	
	int leftArr[n1];
	int rightArr[n2];
	
	for(int i=0; i<n1; i++){
		leftArr[i] = arr[i+l];
	}
	for(int j=0; j<n2; j++){
		rightArr[j] = arr[mp+1+j];
	}
	
	int i=0;
	int j=0;
	int k=0;
	
	while(i<n1 && j<n2){
		if(leftArr[i]<=rightArr[j]){
			arr[k]=leftArr[i];
			i++;
		}else{
			arr[k]=rightArr[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k]=leftArr[i];
		i++;
		k++;
	}
	
	while(j<n2){
		arr[k]=rightArr[j];
		j++;
		k++;
	}
	

}

void printArr(int arr[], int length){
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
