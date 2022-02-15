#include<iostream>
#include<cstring>

using namespace std;

int szukaj(string wzorzec, string tekst)
{
	for(int i=0;i <= tekst.size() - wzorzec.size();i++) 
	{
		int c = 0;
		for(int czyJestBlad=0;j<wzorzec.size();czyJestBlad++)
		{
			if(wzorzec[czyJestBlad] != tekst[i + c])
				break;
			if(czyJestBlad == wzorzec.size() - 1)
				return i+1;
			++c;
		}
	}
	return -1;
}
int main()
{
	string wzorzec, tekst;
	cout<<"Podaj tekst: ";
	cin>>tekst;
	cout<<"Podaj wzorzec: ";
	cin>>wzorzec;
	
	int pos = szukaj(wzorzec, tekst);
	
	if(pos == -1)
		cout<<"NIE";
	else
		cout<<"TAK, znajduje się na "<<pos<<" pozycji";
	
	return 0;
}
