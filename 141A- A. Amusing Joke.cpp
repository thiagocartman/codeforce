#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string a; //hospede
string b; //anfitriao
string c; //cartas
string d;
cin >> a >> b >> c;
d = a+b; // todas as palavras de hospede e anfitriao em uma so string
sort(c.begin(), c.end()); // string menor para o maior das cartas
sort(d.begin(), d.end()); // string menor para o maior de a+b

if(c==d){
	cout << "YES";
}
else{
	cout << "NO";
}

}
