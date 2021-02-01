#include<iostream>
#include <string.h>
using namespace std;
int main(){
int n,k;
char search_string = n;
cin >> n >> k;
for (int i=0;i<k;i++)
	
	if((n % 10) != 0) // vai verificar se o ultimo numero e diferente de 0, ex 512 div por 10 = 51(resto 2)  
	{
	 	n = n-1;     // vai diminuir verificou que o resto nao era 0.
	}
	else {
		n = n/10;
	}
	cout << n <<endl;
}
