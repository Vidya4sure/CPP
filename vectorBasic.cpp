#include <bits/stdc++.h>
using namespace std ;

int main(){
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
  	cout.tie(NULL);

	vector<int> arr;

	// push_back is using to add the elements
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(40);

    // .pop_back is used for removing the element from back
	arr.pop_back();

	for(int x : arr){
		cout << x << " " ;
	}
}	