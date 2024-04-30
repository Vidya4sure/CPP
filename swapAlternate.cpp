#include <iostream>
using namespace std ;

void swapAlternate(int arr[] , int size){

	for(int i = 0 ; i < size ; i = i + 2){
		if( (i + 1) < size){
			swap(arr[i] , arr[i + 1]);
		}
	}
}


void printArray( int arr[] , int size){
	for(int i = 0 ; i < size ; i++){
		cout << arr[i] << " " ;
	}
	cout << endl ;
}

int main(){
	int arr[6] = { 99 , 100 , -4 , 8 , 0 , 9};


	swapAlternate(arr , 6);
	printArray(arr , 6);

	return 0 ;
}