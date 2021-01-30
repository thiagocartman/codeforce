#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
int arr[n];
cin >> n;
for(int i=0; i<n; i++){
	
	cin >> arr[i];
	
	if(arr[i] < arr[i+1]){
		
		swap(arr[i],arr[i+1]);
		
		count++;
	}
	
}	
	cout << count;
		
}
