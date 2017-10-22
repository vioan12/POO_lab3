//Problema 5 - Laboratorul 3

#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class InternationalStandardBookNumber{
private:
	char isbn[14];
public:
	InternationalStandardBookNumber(char [], char [], char []);
	InternationalStandardBookNumber(char []);
	~InternationalStandardBookNumber();
	int validarecifracontrol();
	void afisareisbn();
	int concatenarecifre(char[]);
};