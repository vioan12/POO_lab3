//Problema 5 - Laboratorul 3

#include"Standardul_ISBN.h";

int main()
{
	InternationalStandardBookNumber *ISBN = new InternationalStandardBookNumber("279", "32", "4700");
	ISBN->afisareisbn();
	cout <<endl<< ISBN->validarecifracontrol();
	delete ISBN;

	ISBN = new InternationalStandardBookNumber("896-452-003-0");
	ISBN->afisareisbn();
	cout <<endl<< ISBN->validarecifracontrol();
	delete ISBN;

	ISBN = new InternationalStandardBookNumber("00463-44-53-X");
	ISBN->afisareisbn();
	cout <<endl<< ISBN->validarecifracontrol();
	delete ISBN;

	return 0;
}