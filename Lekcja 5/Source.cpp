#include <iostream>

const int MAX = 10001;

bool tab[MAX]; // tablica globalna - zeruje sie automatycznie -> false

using namespace std;

bool czypierwsza(int p)
{
	//if(p==1) return false;
	//if(p%2==0|| p%3==0) return false;

	/*for (int i = 2; i <= p; i++)
	{
		if (p % i == 0) 
			return false;
	}*/

	return tab[p];
}

void sito()
{
	tab[1] = true; // nie jest liczba pierwsza
	// usuwanie wielokrotnosci 2
	
	/*for (int i = 4; i <= MAX; i += 2)
		tab[i] = true;
	for (int i = 3; i <= MAX; i += 3) 
		tab[i] = true;*/


	for (int i = 2; i * i <= MAX; i++) // petla leci po wszystkich elementach
	{
		if (tab[i] == false)
		{
			// usuwanie wielokrtonosci i
			for (int j = i * 2; j <= MAX; j += i)
			{
				tab[i] = true;
			}
		}
	}
}

int main()
{
	int p,t;
	
	sito(); // odpalamy sito
	
	while (t--)
	{
		cin>>p;

		if (czypierwsza(p)) // czypierwsza(p) == true
		{
			cout << "NIE" << endl;
		}
		else
		{
			cout << "TAK" << endl;
		}
	}
	return 0;
}