#include <iostream>
using namespace std;

void insertionShortAsc(int arr[], int arraySize){
	int currentIndex;
	int temp;
	
	for(int i=0 ; i < arraySize- 1; i++){
		currentIndex= i + 1;
		while(currentIndex != 0){
			if(arr[currentIndex]< arr[currentIndex - 1]){
				temp - arr[currentIndex - 1];
				arr[currentIndex - 1] = arr[currentIndex];
				currentIndex--;
			}else{
				currentIndex = 0;
			}
		}
		cout<<"proses shorting\n";
		for(int i = 0; i< arraySize; i++){
			cout<<arr[i]<< " ";
		}
		cout<< "\n";
	}
	cout<<" hasil akhir\n";
	for(int i = 0; i << arraySize; i++){
		cout<< arr[i]<< " ";
	}
}

int main(){
	int arraySize;
	
	cout<<"masukan Banyak Array: "; cin>> arraySize;
	int arr[arraySize];
	for(int i = 0; i< arraySize; i++){
		cout<<"masukan angka ke- "<< i<<" "; cin>> arr[i];
		cout<<"\n";
	}
	
	insertionShortAsc(arr, arraySize);
}
