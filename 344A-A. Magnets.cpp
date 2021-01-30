#include<iostream>
using namespace std;
int main(){
int n,count=0; 

cin >> n; // vai inserir um numero
int arr[n]; // criei meu array com a quantidade que escolher acima
for(int i=0;i<n;i++){ // controla a entrada de quantos vou colocar no meu array  
	
	cin >> arr[i];    // vou colocar os valores no meu array
}	
for(int i=0;i<n;i++){ //enumerou meu array se tornando indices.
	
	if(arr[i] != arr[i+1]){ //se o numero i for diferente do proximo eu conto.
		
		count++;
	}
// percebe se que o count conta um a mais porque passa o array e testa se nao eu teria q colocar 1 no
// count e n-1, que daria no mesmo a respota.	
}
	cout << count;
	
	
	
	
}
