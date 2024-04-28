#include <iostream>

int main(){
	int arr[5] = {1 , 2, 3, 4 ,5};
	int newArr[5] ;
	std::cout << arr.size() ;

	// for(int i = 0 ; i < 5 ; i++){
	// 	int sum = 0 ;
	// 	for(int j = 0 ; j <= i ; j++){
	// 		sum = sum + arr[j];
	// 	}
	// 	newArr[i] = sum ;
	// }

	// Now here comes the optimal code for prefix sum 
	// newArr[0] = arr[0] ;

	// for(int i = 1 ; i < 5 ; i++){
	// 	newArr[i] = newArr[i - 1] + arr[i] ;
	// }

	// for (int i = 0; i < 5; ++i)
	// {
	// 	std:: cout << newArr[i] << std::endl ;
	// }

	return 0 ;
}