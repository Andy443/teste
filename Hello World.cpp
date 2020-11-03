#include<iostream>
using namespace std;

char sel;
string sel1;

int main()
{
	
cout << "Selecione se ira imprimir em:\n[a]=Portugues	[b]=Ingles\n";

do
{
cin >> sel;
}while(sel!='a'&sel!='b');

switch(sel)
{
	case 'a':
	{
		cout << "Ola mundo!";
		break;
	}
	
	case 'b':
	{
		cout << "Hello World";
		break;
	}
}	
	
	
	
	
	
	return 0;
}
