//Problema 6 - Laboratorul 3

#include"Biblioteca.h";

int main()
{
	structautori tempautori;
	Carte *carte;
	tempautori.n = 0;
	vector<Carte> biblioteca;
	char temp[100], c,*temptitlu,*tempeditura,*tempisbn,*tempanaparitie,*temppret;
	int n_carti;
	ifstream file;
	file.open("in.txt");
	tempautori.n = 0;
	file.getline(temp, 100);
	n_carti = atoi(temp);
	for (int i = 0;i < n_carti;i++) {

		file.getline(temp, 100);
		temptitlu = new char[strlen(temp) + 1];
		strcpy(temptitlu, temp);

		file.getline(temp, 100);
		tempeditura = new char[strlen(temp) + 1];
		strcpy(tempeditura, temp);

		file.getline(temp, 100);
		tempautori.n = atoi(temp);
		tempautori.autor = new lista_autori[tempautori.n];
		for (int j = 0;j < tempautori.n;j++) {
			file.getline(temp, 100);
			tempautori.autor[j].nume = new char[strlen(temp) + 1];
			strcpy(tempautori.autor[j].nume, temp);
		}

		file.getline(temp, 100);
		tempisbn= new char[strlen(temp) + 1];
		strcpy(tempisbn, temp);

		file.getline(temp, 100);
		tempanaparitie = new char[strlen(temp) + 1];
		strcpy(tempanaparitie, temp);

		file.getline(temp, 100);
		temppret = new char[strlen(temp) + 1];
		strcpy(temppret, temp);

		carte = new Carte(temptitlu,tempeditura,tempautori,tempisbn,tempanaparitie,temppret);
		biblioteca.push_back(*carte);

		delete temptitlu;
		delete tempeditura;
		delete tempautori.autor;
		delete tempisbn;
		delete tempanaparitie;
		delete temppret;

	}
	file.close();
	for (int i = 0;i < biblioteca.size();i++) {
		cout <<endl<< "---------------------------------";
		biblioteca.at(i).afisaretot();
	}

	return 0;
}
