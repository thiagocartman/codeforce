#include<iostream>
using namespace std;
int main(){
int n,count=0;
int arr[111];
cin >> n;	
for(int i=0;i<n;i++){
	
	cin >> arr[i];
	
	if(arr[i]==1){
		
		count++;
	}
}
	if(count == 0){
		
		cout << "EASY";
	}
	else {
		cout << "HARD";
	}
	
	return 0;
	
}
