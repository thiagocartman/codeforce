#include <iostream>
using namespace std;
int main(){
int k,r; // preco da pa e valor da moeda r;
int soma=0;
cin >> k >> r;

/* funciona assim: se o numero ja for comprado com as moedas que valem 10 eh i e se ele dividido por
 10 tiver o valor da moeda r tbm eh i, caso nao, vai ficar somando  o valor de k mais k ate dar
 umas das duas condicoes dando o numero de vezes como resposta. */
for(int i=1;   ;i++){
	
	soma=soma+k;
	
	if((soma%10==0) || (soma%10==r)){
		cout << i;
		break;
	}
	else{
		continue;
	}
		
}	
		
}
