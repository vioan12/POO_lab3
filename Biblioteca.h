//Problema 6 - Laboratorul 3

#pragma once
#include<iostream>
#include<string.h>

struct structautori
{
	char *autor;
	int n;
};

class Carte
{
private:
	char *titlu, *editura, *isbn, *anaparitie, *pret;
	structautori *autori;

public:
	Carte(char valueoftitlu[], char valueofeditura[], structautori valueofautori[], char valueofisbn[], char valueofanaparitie[], char valueofpret[]);
	
	void cautare_titlu(char valueoftitlu[]);
	void cautare_editura(char valueofeditura[]);
	void cautare_isbn(char valueofisbn[]);

	void afisare_titlu();
	void afisare_editura();
	void afisare_autori();
	void afisare_isbn();
	void afisare_anaparitie();
	void afisare_pret();
};