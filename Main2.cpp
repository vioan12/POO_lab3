//Problema 6 - Laboratorul 3

#include"Biblioteca.h";

int main()
{
	char ed[] = "Editura Pedagogica", tl[] = "Harap alb si merele de aur", is[] = "RO-9654-TRR8-DSFD-54S5", an[] = "1996", pr[] = "20 lei";
	struct structautori au;
	au.n = 3;
	au.autor = new lista_autori[au.n];
	au.autor[0].nume = new char[8];
	au.autor[1].nume = new char[8];
	au.autor[2].nume = new char[11];
	strcpy(au.autor[0].nume, "Spataru");
	strcpy(au.autor[1].nume, "Creanga");
	strcpy(au.autor[2].nume, "Castasescu");

	Carte *carte1 = new Carte(tl,ed,au,is,an,pr);
	Carte carte2(*carte1);
	carte1->afisaretot();
	delete carte1;
	return 0;
}
