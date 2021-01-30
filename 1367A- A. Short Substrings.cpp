#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
string a="",b;
cin >> t;
for(int i=0; i<t; i++){ //controla a repeticao
cin >> b;
a=a+b[0]+b[1];	
	for(int j=3; j<b.size(); j+=2){ //controla string
		a=a+b[j];
	}
cout << a <<endl;
a="";			
}	
	
	
}
