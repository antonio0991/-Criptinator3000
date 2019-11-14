#include <iostream>
#include <string>
#include <cstring>


using namespace std;


string cesar_encripta(string frase, int chave)
{
	int comprimento;
	comprimento = (int)frase.length();
	for(int i = 0; i < comprimento; i++)
	{
		for(int j = 0; j < chave; j++)
		{
			if(frase[i] == 'z')
				frase[i] = 'a';
			else if(frase[i] == 'Z')
				frase[i] = 'A';
			else
				frase[i]++;
		}
	}
	return (frase);
}
string cesar_decripta(string frase, int chave)
{
	int comprimento;
	comprimento = (int)frase.length();
	for(int i = 0; i < comprimento; i++)
	{
		for(int j = 0; j < chave; j++)
		{
			if(frase[i] == 'a')
				frase[i] = 'z';
			else if(frase[i] == 'A')
				frase[i] = 'Z';
			else
				frase[i]--;
		}

	}
	return (frase);
}
