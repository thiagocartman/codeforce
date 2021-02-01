#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () 
{
int count=0;	
string s;
cin >> s;
sort(s.begin(),s.end()); //ordena cada palavra do menor para o maior 
for (int i=0; i<s.size(); i++) 
{
	if(s[i] != s[i+1]) //ele vai comparar cada letra com a proxima, se for diferente ele conta.
	{
		count++;
	}
}

 if(count%2 == 0) //se count dividido por 2 sobrar zero ele e par ent ele chat with her.
    {
 	cout << "CHAT WITH HER!";
 	}
 else // se n e um homem
    cout << "IGNORE HIM!";

	
}
