#include <iostream>

int main(){
	std::cout << "Enter the a number " << std::endl ;
	int num1 ;
	std::cin >> num1 ;

	std::cout << "Enter the second number" << std::endl ;
	int num2 ;
	std::cin >> num2 ;

	int sum = num1 + num2 ;
	std::cout << "Total Sum " << sum ; 
}