#include<iostream>
#include<math.h>
using namespace std;
int main(){
//Podemos perceber na questao que dependendo do valor de n, o resultado eh um numero par caso n seja par
// ou se n for impar ele eh negativo - 1.	
// tem que ser long long porque usa 64bits e ele verifica um numero enorme de 64 bits.
//long = int 
long long int n;
cin >> n;
n=pow(-1,n)*n;    //pow(base,expoente)

if(n%2==0){
	
	cout << n/2;
}
else {
	
	cout << (n/2)-1;
}
}
