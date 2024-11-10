#include <iostream>

const int MAX = 10001;

bool tab[MAX]; // tablica globalna - zeruje sie automatycznie -> false

using namespace std;

bool czypierwsza(int p)
{
	if(p==1) return false;
	if(p%2==0|| p%3==0) return false;
}

bool sito()
{
	tab[1] = true; // nie jest liczba pierwsza
	// usuwanie wielokrotnosci 2
	for (int i = 4; i <= MAX; i += 2) 
		tab[i] = true;
	for (int i = 3; i <= MAX; i += 3) 
		tab[i] = true;
}

int main()
{
	return 0;
}