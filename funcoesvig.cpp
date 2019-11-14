#include <iostream>
#include <string>
#include <cstring>

string vigenere_encripta(string frase, string chave)
{
	int comprimento_chave, comprimento, i, t;
	comprimento_chave = (int)chave.length();
	comprimento = (int)frase.length();

	if(comprimento_chave < comprimento)
	{
		for(i = 0; i < (comprimento - comprimento_chave); i++)
		{
			chave += chave[i];
		}
	}
	for(i = 0; i < comprimento; i++)
	{
		t = toupper(chave[i]);
		if(t > 97)
			t -= 98;
		else
			t -= 65;

		for(int j = 0; j < t; j++)
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
string vigenere_decripta(string frase, string chave)
{
	int comprimento_chave, comprimento, i, t;
	comprimento_chave = (int)chave.length();
	comprimento = (int)frase.length();

	if(comprimento_chave < comprimento)
	{
		for(i = 0; i < (comprimento - comprimento_chave); i++)
		{
			chave += chave[i];
		}
	}
	for(i = 0; i < comprimento; i++)
	{
		t = toupper(chave[i]);
		if(t > 97)
			t -= 98;
		else
			t -= 65;

		for(int j = 0; j < t; j++)
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
