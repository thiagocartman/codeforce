#include <iostream>
using namespace std;
int main() {
int y,a,b,c,d;
cin >> y;

// basicamente aqui vai contar o ano escolhido + o incremento ate achar outro diferente.
for(;;){
	y++;
	// vou pegar todos os numeros separados do ano escolhido exemplo 1987
	a=(y/1000); //1
	b=(y/100)%10; //9
	c=(y/10)%10; //8
	d=(y%10); //7
	// vendo se eh diferente.
	if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
		break;
	}	
}
cout << y; 


}
