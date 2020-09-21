#include <iostream>
#include <string>
using namespace std;

int main(){ 
  string s;
  cin >> s;	
  int t = s.length(); //t e igual ao tamanho da string s.
  for(int i = 0; i < t; i+=2){ // esse for conta de 2 em 2 um numero 
    for(int j = i+2; j < t; j+=2){ // esse faz o mesmo com outro numero
      if(s[i] > s[j]){ //se o i for maior do que o j vai trocar a posicao
        char aux = s[i]; //aqui faz a troca, pode usar tbm um swap(s[i],s[j])
        s[i] = s[j];
        s[j] = aux;
      }
    }
  }
  cout << s << endl;
  return 0;
}
