//Problema 5 - Laboratorul 3

#include"Standardul_ISBN.h";

InternationalStandardBookNumber::InternationalStandardBookNumber(char valueofidenttara[], char valueofidenteditura[], char valueofidenttitlu[])
{
	int i,j,x;
	char c[14];
	for (i = 0,j=0;i < strlen(valueofidenttara);i++,j++)
		isbn[j] = valueofidenttara[i];
	isbn[j++] = '-';
	for (i = 0;i < strlen(valueofidenteditura);i++, j++)
		isbn[j] = valueofidenteditura[i];
	isbn[j++] = '-';
	for (i = 0;i < strlen(valueofidenttitlu);i++, j++)
		isbn[j] = valueofidenttitlu[i];
	isbn[j++] = '-';
	for (i = 0;i < j;i++)
		c[i] = isbn[i];
	c[i] = NULL;
	x =concatenarecifre(c);
	if (x % 11 < 10)
		isbn[j++] = (char)x % 11+48;
	else
		isbn[j++] = 'X';
	isbn[j] = NULL;
}

InternationalStandardBookNumber::InternationalStandardBookNumber(char valueofisbn[])
{
	int i;
	for (i = 0;i <= strlen(valueofisbn);i++)
		isbn[i] = valueofisbn[i];
}

InternationalStandardBookNumber::~InternationalStandardBookNumber()
{
	//delete[] isbn;
}

int InternationalStandardBookNumber::concatenarecifre(char s1[])
{
	int num = 0,i;
	for(i=0;i<strlen(s1);i++)
		if (s1[i] >= 48 && s1[i] <= 57)
			num = num * 10 + s1[i]- 48;
	return num;
}

void InternationalStandardBookNumber::afisareisbn()
{
	cout << endl << "ISBN " << isbn;
}

int InternationalStandardBookNumber::validarecifracontrol()
{
	int i, cifcont;
	char c[14];
	if (isbn[strlen(isbn) - 1] >= 48 && isbn[strlen(isbn) - 1] <= 57)
		cifcont = isbn[strlen(isbn)-1]-48;
	else
		cifcont = 10;
	for (i = 0;i < strlen(isbn) - 1;i++)
		c[i] = isbn[i];
	c[i] = NULL;
	if (cifcont == concatenarecifre(c)%11)
		return 1;
	else
		return 0;
}