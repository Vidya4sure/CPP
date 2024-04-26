#include <iostream>
using namespace std ;

bool search(int arr[] , int size , int key){

	for(int i = 0 ; i < size ; i++){
		if(arr[i] == key){
			return true ;
		}
	}

	return false ;
}

int main(){
	int arr[10] = {11 , 2 , 3, 55 , 0 , 88 ,9 ,65 , 7 , 1};

	cout << "Enter a key number " << endl ;
	int key ; 
	cin >> key ;

	bool found = search(arr , 10 , key); 

	if(found){
		cout << "Key is present "  << endl ;
	}else {
		cout << "Key is absent " << endl ;
	}

}