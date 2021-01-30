#include<iostream>
using namespace std;
int main(){
	
int n,m;
	
cin >> n >> m;

for (int i=1; i<=n; i++){ // produz as linhas,obs: tem q ser 1 porque na hora de impa ou par o 0 atrapalha.
	
	for(int j=0; j<m; j++){ // produz o caractere "#"
		
		if(i%4==0){ // se o numero da linha i for par ele escreve pontos e no final #.
			
			if(j==m-1){ // quando j for igual o ultimo numero da linha q eh m ele vai escrever #.
				cout << "#";}
			
			else { // aqui caso contrario eh os pontos.
				cout << "."; }
			
			}
		else if(i%4==2){ // esse caso foi criado para colocar o # no comeco a cada 2 interacoes.
				if(j==0){
				cout <<"#";} 
				
				else {
				cout <<".";}	
			}
		else{
			cout << "#";
		}
	}
	cout << endl;
}	
	
}
