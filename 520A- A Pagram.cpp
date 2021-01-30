#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
string s;
cin >> n >> s;

// nessa vou receber a string e transformar em minuscula para analisar melhor.
for(int i=0; i<n; i++){
	
	s[i]=towlower(s[i]);
}
// vou ordenar a palavra do menor para o maior.
sort(s.begin(),s.end());
// agora vou comparar a palavra inserida com a nova ordenada
for(int i=0; i<n; i++){
	if(s[i] != s[i+1]){
		count++;
	}
}
// se o count igual a 26 quantidade de palavras no alfabeto.
if(count == 26){
	cout << "YES";
}
else {
	cout << "NO";
}

}




