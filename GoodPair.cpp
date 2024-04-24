#include <iostream>

int main()
{
	int arr[6] = {1 , 2 , 3 , 1 , 1 , 3};
	int count = 0 ;
	for (int i = 0 ; i < 6 ; i++){
		for(int j = 0 ; j < 6; j++){
			if(arr[i] == arr[j] && i < j){
				count++;
			}
		}
	}

	std::cout << count ;

	return 0;
}