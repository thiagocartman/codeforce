#include <iostream>
#include <string>
using namespace std;
int main () 
{  //nesse codigo ele analisa em 2 em 2, pulando a soma.
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i+=2) // i=i+2
	{  
		for(int j=0; j<s.size()-1; j+=2)
		{
			if(s[j]>s[j+2]) // nessa parte ele pega o lugar da string e ver se uma e maior do q a outra para trocar o lugar
			{
				swap(s[j],s[j+2]);
			}
		}
		
	}
	cout<<s<<endl;
}
