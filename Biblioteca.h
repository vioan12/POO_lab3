//Problema 6 - Laboratorul 3

#pragma once
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h> 
#include <vector>

using namespace std;

struct lista_autori
{
	char *nume;
};

struct structautori
{
	lista_autori *autor;
	int n;
};

class Carte
{
private:
	char *titlu, *editura, *isbn, *anaparitie, *pret;
	structautori *autori;

public:
	Carte(const char [], const char [], const structautori , const char [], const char [], const char []);
	Carte(const Carte &);
	~Carte();

	void afisare_titlu();
	void afisare_editura();
	void afisare_autori();
	void afisare_isbn();
	void afisare_anaparitie();
	void afisare_pret();
	void afisaretot();

	char* Get_titlu();
	char* Get_editura();
	char* Get_isbn();
};
