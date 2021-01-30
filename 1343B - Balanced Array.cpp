#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin >> t;
for(int i=0; i<t; i++){
	
int x; 
cin >> x;
int sum1=0, sum2=0;
vector<int>n; // criei um vetor de tamanho n;
if(x%2==0){
	if(x%4==0){
		cout << "YES" << endl;
n.push_back(2);// ele vai comecar adicionando 2
for(int i=1; i<=x; i++){
	
	if(i%2==0){
	 n.push_back(i); // vai adicionar 2 no comeco e logo em seguida 4 assim continua	
	}
}
for(int i=1; i<=x; i++){
	
	if(i%2!=0){
	 n.push_back(i);
	 sum1=sum1+i;	
	}
}	
for(int i=1; i<=n.size()/2; i++){
	sum2=sum2+n[i];
}
int a = sum2-sum1;
int b = n.back();
n.back() = a+b;	
for(int i=1; i<=x; i++){
	cout << n[i] << " ";
}
	}
	else{
		cout << "NO" <<endl;
	}
} 
else{
	cout<<"NO";
}
}
}
