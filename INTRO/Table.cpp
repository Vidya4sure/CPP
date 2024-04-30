#include <iostream>

int main(){
	int num ;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num ;

	for(int i = 1 ; i <= 10 ; i++){
		std::cout << num * i << std::endl ;
	}

	return 0 ;
}