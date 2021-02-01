#include <iostream>
using namespace std;
int main (){
int n,h,count1=0,count2=0;	//n=n de amigos,h=altura da cerca.
int a;	//altura de cada pessoa.
cin >> n >> h; 
int arr[n]; //isso abre uma caixa com a quantidade de quadrados igual a n.
for (int i=0;i<n;i++){
	
	cin >> arr[i]; //aqui coloco os valores nos quadrados q abri.
	
	if(arr[i]<=h){
		
		count1++;
	}
	else{
		count2=count2+2;
	}
}

cout << count1+count2;	
	
	
	
}
