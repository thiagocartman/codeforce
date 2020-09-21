#include <iostream>
#include <string.h>
using namespace std;
int main () 
{
string x,y;
cin>>x>>y;
	for(int i=0; i<x.size(); i++ )//enquanto i for menor do que o tamanho da palavra vai ficar nesse for.
	{
		x[i]=towlower(x[i]); //converte um determinado caractere em minúsculas.
		y[i]=towlower(y[i]); // vai ficar convertendo em minuscula ate acabar o "for".
	}                        // porque na questao ele diz q tanto "A" quanto "a" da no mesmo isso evita erro.
	if (x==y){
		cout << "0" <<endl; } // como ja esta minuscula ja pode comparar.
		
		else {
			for (int i=0; i<x.size();i++){ //esse for vai controlar x e y q vai entrar para comparar.
				if(x[i]<y[i]){         
					cout<<"-1"<<endl;   
					break;  // assim que for conferido q x<y, ele imprime e quebra a linha acabando com o for.
				}
				if(x[i]>y[i]){   //caso o for veja q o de cima n serve ele vem para esse if e testando.
					cout<<"1"<<endl;
					break;
				}	
			}	
		}
}
