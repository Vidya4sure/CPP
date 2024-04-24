#include <iostream>

int main(){
	int num ;
	std:: cin >> num ;

	int numOfDigits = 0 ;
	int tempNum = num ;
	int originalNum = num ;

	while (tempNum != 0){
		tempNum = tempNum / 10 ;
		numOfDigits++ ;
	}

	tempNum = originalNum ;

	int arrNum[numOfDigits] ;

	for (int i = numOfDigits - 1 ; i >= 0 ; i--){
		arrNum[i] = tempNum % 10 ;
		tempNum = tempNum / 10 ;
	}

	int oddSum = 0 ;
	int evenSum = 0 ;

	for (int i = 0 ; i < numOfDigits ; i++){
		if(arrNum[i] % 2 == 0){
			evenSum = evenSum + arrNum[i];
		}else {
			oddSum = oddSum + arrNum[i] ;
		}
	}

	std:: cout << evenSum << " " << oddSum ;

	return 0 ;
}