#include <iostream>
#include <string>

using namespace std;

pair<char, int> tab[27];

pair<char, int> zmienione[27];

//char znaki[91];

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

string zaszyfruj(string slowo) // funkcja zwraca zaszyfrowane slowo
{
	for (int i = 0; i < slowo.size(); ++i) // petla leci po wszystkich znakach w slowie
	{
		// podpowiedz

		// zmienione[1] - odwouluje sie Do litery A zmienionej na D
		// zmienione[1].first = 'A'
		// zmienione[1].second = 4
		// slowo[i] -> znak char
		// slowo[i] - 65 + 1 -> odowlanie sie do i-tego elementu tablicy zmienione
		// zmienione['A' - 65 + 1].first -> zmienione[1].first -> 'A'
		// zmienione['A' - 65 + 1].second -> zmienione[1].second -> 4
		// tab['A' - 65 + 1].first -> tab[1].first -> 'A'
		// tab['A' - 65 + 1].second -> tab[1].second -> 1

		slowo[i] = tab[zmienione[slowo[i] - 65 + 1].second].first;
	}

	return slowo;
}

string zaszyfruj2(string slowo)
{
	for (int i = 0; i < slowo.size(); ++i) // petla leci po wszystkich znakach w slowie
	{
		if (slowo[i] > 'W')
		{
			if (slowo[i] == 'X')
			{
				slowo[i] = 'A';
			}
			if (slowo[i] == 'Y')
			{
				slowo[i] = 'B';
			}
			if (slowo[i] == 'Z')
			{
				slowo[i] = 'C';
			}
		}
		else
		{
			slowo[i] = slowo[i] + 3;
		}
	}

	return slowo;
}

int main()
{
	int s;
	string slowo;
	/*tab[1].first = 'A';
	tab[1].second = 1;

	tab[2].first = 'B';
	tab[2].second = 2;*/

	ustaw();
	zamiana();

	cout<<"podaj ilosc slow";
	cin>>s;

	while(s--)
	{
		cin>>slowo;

		cout << zaszyfruj2(slowo) << endl;
	}
	
	return 0;
}

