#include <iostream>
#include <string>
using namespace std;
int main () 
{
int n,X=0;
string s;	
cin >> n;
while(n--) //n=n-1
{
	cin >> s;
	if(s[1] == '+' ) //se a segunda letra da string for + ele conta exemplo(X++ or ++X)sempre e "+" 
	                // e string comeca no 0 por isso 1 e a segunda.
	{
		X++;
	}
	else {
		X--;
	}
}
	cout << X <<endl;
	return 0;
}
