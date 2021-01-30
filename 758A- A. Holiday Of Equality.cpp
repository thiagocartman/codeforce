#include<iostream>
using namespace std;
int main(){
	
int n; 
cin >> n; //quantidade de pessoas
int arr[n]; // array com a quantidade
int maximum = 0;
int result = 0;
for(int i=1; i<=n; i++){
	
cin >> arr[i];

if(maximum < arr[i]) // nessa funcao encontro o numero maior do array
{
	maximum = arr[i];
}
		
}
for(int i=1; i<=n; i++){
	result = (maximum - arr[i]) + result;
}		
cout << result;	
	
}
