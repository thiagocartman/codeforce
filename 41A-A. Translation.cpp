#include<iostream>
#include<string>
#include<bits/stdc++.h> //biblioteca bem util pois inclui tudo q eh preciso.
using namespace std;
int main(){
string s,t;	
string aux;
	cin >> s >> t;
	
	reverse(s.begin(),s.end()); // essa funcao inverte a string s.
	if (s==t){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	
	
	
	
	
	
}
