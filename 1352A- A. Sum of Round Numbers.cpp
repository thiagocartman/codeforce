#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
int t; 

cin>>t;
	
for(int i=0; i<t; i++)	
{
vector<int>my;	
int n,count=0,aux;	
cin>>n;	
if(n%10!=0){my.push_back(n%10);}
aux = n%10;// ex: 9876%10=6 
n = n - aux;// ex: 9876-6=9870
if(n%100!=0){my.push_back(n%100);}
aux = n%100;// ex: 9870%100=70
n = n - aux; // ex: 9870-70=9800
if(n%1000!=0){my.push_back(n%1000);}
aux = n%1000;// ex: 9800%1000=800
n = n - aux;// ex: 9800-800=9000
if(n%10000!=0){my.push_back(n%10000);}
if(n>=10000 && n%10000==0){my.push_back(n);}	

cout <<my.size()<<endl;

for(int i=0; i<my.size(); i++){
	cout << my[i] <<" ";
}		
}	
	
	
	
	
	
}
