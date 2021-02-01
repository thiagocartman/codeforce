#include<iostream> //cout
#include <algorithm> //sort
using namespace std;
int main(){
	
int arr[4]; //crio um vetor de 4 espacos

for(int i=0; i<4; i++){
	
cin >> arr[i];	 // vou inserir os 4 numeros que eh os somatorios a, b e c.
		
}	
	
sort(arr, arr+4); //ordenar meu vetor do menor para o maior e digo onde ele para q eh no 4;
	
int c = arr[3] - arr[0]; //(a+b+c)-(a+b)=c	
int b = arr[2] - c; //(b+c)-c=b
int a = arr[3] - (b+c); //(a+b+c)-(b+c)=a


cout <<a<<" "<<b<<" "<<c<<" ";
}
