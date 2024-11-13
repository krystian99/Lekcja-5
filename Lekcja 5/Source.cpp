#include <iostream>
#include <string>

using namespace std;
bool sprawdzanie(string slowo)
{
	// kajak
	// c = k
	// c = i

	//int j = slowo.size() - 1;
	for (int i = 0; i < (slowo.size() + 1) / 2; i++)
	{
		for(int j = slowo.size() - 1;j>(slowo.size()+1)/2; j--)

		//j--;
	}
		
		


	return false;
}




int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		string s;
		cin>> s;
		if(sprawdzanie(s)== true)
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout<<"NIE"<<endl;
		}
	}
	return 0;
}

