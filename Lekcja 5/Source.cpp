#include <iostream>
#include <string>

using namespace std;

pair<char, int> tab[27];

pair<char, int> zmienione[27];

void ustaw()
{
	for (int i = 1; i <= 26; ++i)
	{
		tab[i].first = 'A' + i - 1; // A, B, C, D
		zmienione[i].first = 'A' + i - 1;
		tab[i].second = i;
		zmienione[i].second =i;
	}
}

void zamiana()
{
	//tab[24].second = 1;
	//tab[25].second = 2;
	//tab[26].second = 3;

	zmienione[24].second = 1;
	zmienione[25].second = 2;
	zmienione[26].second = 3;

	for (int i = 1 ; i <= 23; i++)// chce zrobic petle ktora zwraca wartosci o 3 wieksze od i
	{
		int przesuniecie;
		przesuniecie = i+3;
		
		zmienione[i].second = przesuniecie;
	}
	
}


int main()
{
	tab[1].first = 'A';
	tab[1].second = 1;

	tab[2].first = 'B';
	tab[2].second = 2;

	ustaw();
	
	return 0;
}

