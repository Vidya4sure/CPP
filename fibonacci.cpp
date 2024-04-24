#include <iostream>

int main(){
	int input ;
	std::cin >> input ;
	
	int t1 = 0 ;
	int t2 = 1 ;

	for(int i = 0 ; i < input ; ++i){
		int nextNum = t1 + t2 ;
		t1 = t2 ;
		t2 = nextNum;
		std::cout << t1 << std::endl ;
	}

	return 0;
}