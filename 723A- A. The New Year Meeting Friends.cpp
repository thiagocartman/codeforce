#include<iostream> 
using namespace std;
int main(){
	
int x1,x2,x3;
cin >> x1 >> x2 >> x3;

if(x1>x2 && x1>x3 && x2<x3){cout<<x1-x2;}//para x1 maior e x2 menor
if(x1>x2 && x1>x3 && x3<x2){cout<<x1-x3;}//para x1 maior e x3 menor
if(x2>x1 && x2>x3 && x1<x3){cout<<x2-x1;}//para x2 maior e x1 menor
if(x2>x1 && x2>x3 && x3<x1){cout<<x2-x3;}//para x2 maior e x3 menor
if(x3>x1 && x3>x2 && x1<x2){cout<<x3-x1;}//para x3 maior e x1 menor
if(x3>x1 && x3>x2 && x2<x1){cout<<x3-x2;}//para x3 maior e x2 menor
if(x1==x2 && x1!=x3){cout<<x1-x3;}//para x1 igual a x2 e x3 diferente
if(x2==x3 && x2!=x1){cout<<x2-x1;}//para x2 igual a x3 e x1 diferente
if(x3==x1 && x3!=x2){cout<<x3-x2;}//para x3 igual a x1 e x2 diferente
if(x1==x2 && x1==x3){cout<<x1;}//tudo igual;
}
