#include <iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	while (n--) //n=n-1 ex: 4 -> 3210 e acaba, quantidade de entrada
	{
		cin >> s;
		
			if(s.size() > 10) //se o tamanho da paralavra for maior que dez passa.
		{
				cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
		} 
		
		else {
			cout << s << endl;
		}
		
	}
	
	return 0;
}
