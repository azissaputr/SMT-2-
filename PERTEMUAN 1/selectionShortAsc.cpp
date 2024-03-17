#include <iostream>
using namespace std;

void selectionShortAsc(int arr[], int arraySize){
	int LastMinimunValueIndex;
	int temp;
	
	for(int i=0 ; i < arraySize- 1; i++){
		int minimumValue = arr[i];
		for(int j = i + 1; j < arraySize; j++){
			if(arr[j] < minimumValue){
				minimumValue= arr[j];
				 LastMinimunValueIndex= j;
				
			}
		}
		temp = arr[i];
		arr[i] = minimumValue;
		arr[LastMinimunValueIndex] = temp;
		cout<<"\nIterasi Ke-: " << i + 1 << ": ";
		for(int i= 0 ; i< arraySize; i++ ){
			cout<<arr[i]<<" ";
		}
	}
	cout<<"\nData Setelah Sorting: ";
	for(int i=0 ; i < arraySize; i++){
		cout<< arr[i]<< " ";
		 
	}
}


int main(){
	int arraySize;
	
	cout<< "masukan jumlah element: "; cin >> arraySize;
	int arr[arraySize];
	cout<<"\n";
	for(int i=0; i< arraySize; i++){
		cout<<"masukan nilai element: "; cin >> arr[i];
	}
	cout<<"\nData sebelum sorting: ";
	for(int i=0; i< arraySize; i++){
		cout<< arr[i]<<" ";
	}
	selectionShortAsc(arr, arraySize);
}
	

