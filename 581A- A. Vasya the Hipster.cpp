#include<iostream>
using namespace std;
int main(){
	
int a,b; // meia a meia b.
int x,y; // meias diferente e meia que pode sobrou para usar mesmo iguais.
	
cin >> a >> b;

//meias diferentes 
if(a>b){
x = b;	
}	
else x = a;	
	
//meias iguais
if(a<b){
y = ((a - b)/2)* (-1); 	

cout << x << " " << y;	
}
else {
y = (a - b)/2; 	

cout << x << " " << y;	
}	
	
}
