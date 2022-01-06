#include<iostream>
#include<cstring>

using namespace std;

void szyfruj(int klucz, char tab[])
{
	int dl = strlen(tab);

        for(int i=0;i<dl;i++)
            {
               if(tab[i] >= 97)
                    if(tab[i] + klucz <= 'z')
                        tab[i] = tab[i] + klucz;
                    else
                        tab[i] = tab[i] + klucz - 26;
                else
                    if(tab[i] + klucz <= 'Z')
                        tab[i] = tab[i] + klucz;
                    else
                        tab[i] = tab[i] + klucz - 26;
            }
}

void deszyfruj(int klucz, char tab[])
{
    	int dl = strlen(tab);

    	 for(int i=0;i<dl;i++)
            {
               if(tab[i] >= 97)
                    if(tab[i] + klucz >= 'a')
                        tab[i] = tab[i] + klucz;
                    else
                        tab[i] = tab[i] + klucz + 26;
                else
                    if(tab[i] + klucz >= 'A')
                        tab[i] = tab[i] + klucz;
                    else
                        tab[i] = tab[i] + klucz + 26;
            }
}

int main()
{
	char tab[100];

	int klucz;

	cout<<"Podaj  mala lub duza litere: ";
	cin>>tab;

	cout<<"Podaj klucz z przedzialu [1 .. 25]: ";
	cin>>klucz;

	szyfruj(klucz,tab);

	cout<<"Po zaszyfrowaniu: "<<tab<<endl;

	deszyfruj(-klucz,tab);

	cout<<"Po rozszyfrowaniu: "<<tab<<endl;

	return 0;
}
