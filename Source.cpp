#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;



void vypiszoz(string zoznamMen[],string zoznamCis[]) {
	
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << ". " << zoznamMen[i] << " - " << zoznamCis[i] << endl;
	}
}



int main() {
	srand((int)time(0));
	cout << "Dobry den, dostali ste sa na spravu telefonnych cisiel" << endl;
	cout << "Ako vam mozem pomoct?" << endl;
	
	int roz = 3;
	
	int b = 0;
	
	while (roz != 1 ) {


		cout << "1. Potrebujem vediet kamaratove alebo niekoho cislo" << endl;
		cout << "2. Potrebujem presmerovat na nejaku osobu pomocou cisla" << endl;
		cout << "3. Vlastne uz nic :)" << endl;
		
		cin >> roz;

		switch (roz) {
		case 1:
			system("cls");
			cout << "Dobre teda, tu je telefonny zoznam s menami a cislami" << endl;
			b = 10;
			break;

		case 2:
			system("cls");
			b = 20;
			break;

		case 3:
			system("cls");
			cout << "Dovidenia, OmegaRoll :)" << endl;
			b = 30;
			return 0;
			break;

		default:
			system("cls");
			cout << "Podla toho aku odpoved chces napis cislo" << endl;
			b = 30;
			break;
			
		}
		if (roz == 2) {
			roz = 1;
		}
 
		if (roz == 3) {
			roz = 1;
		}
	}
	
	int dlzkazoz = 9;
	
	

	const int velkostZoznamu = 10;
	string zoznamCis[velkostZoznamu] = {
		"0907 305 451",
		"0907 445 897",
		"0908 451 687",
		"0907 214 134",
		"0907 145 647",
		"0908 456 410",
		"0907 777 777",
		"0907 998 332",
		"0907 456 778"

	};

	string zoznamMen[velkostZoznamu] = {
		"Blazek Simon",
		"Bukova Gabriela",
		"Cvacho Pavol",
		"Durina Martin",
		"Jedlicak Juraj",
		"Franc Michal",
		"Findura Frantisek",
		"Kapitulcin Jakub",
		"Sidorova Kristina"
			
	};
	
	string zoznamM[velkostZoznamu] = {
		"BlazekSimon",
		"BukovaGabriela",
		"CvachoPavol",
		"DurinaMartin",
		"JedlicakJuraj",
		"FrancMichal",
		"FinduraFrantisek",
		"KapitulcinJakub",
		"SidorovaKristina"

	};

	string zoznamC[velkostZoznamu] = {
		"0907305451",
		"0907445897",
		"0908451687",
		"0907214134",
		"0907145647",
		"0908456410",
		"0907777777",
		"0907998332",
		"0907456778"
};
	
	string cislo;
	if (b == 10) {
		cout << endl;
		cout << "Zoznam:" << endl;
		for (int i = 0; i < 10; i++) {
			cout << zoznamMen[i] << " - " << zoznamCis[i] << endl;
		}
		char cc;
		cout << "Chces odobrat alebo pridat kontakt do zoznamu? " << endl;
		cout << "Ano = y" << endl;
		cout << "Nie = n" << endl;
		cin >> cc;
		if (cc == 'y') {
			
			int chose;
			int repeat = 0;
			while (repeat == 0) {
				cout << endl;
				cout << "1. Odobrat" << endl;
				cout << "2. Pridat" << endl;
				cout << "3. Ukoncit" << endl;
				cin >> chose;
				if (chose == 3) {
					return 0;
				}
				if (chose == 1) {
					system("cls");
					int odobrat;
					cout << "Ktory chces odobrat: " << endl;
					vypiszoz(zoznamMen, zoznamCis);
					cout << "11. Random cloveka" << endl;
					int pc = (rand() % 10);
					cin >> odobrat;

					if (odobrat != 11) {
						zoznamC[odobrat - 1] = "";
						zoznamCis[odobrat - 1] = "";
						zoznamM[odobrat - 1] = "";
						zoznamMen[odobrat - 1] = "";
						string zozC[velkostZoznamu] = {};
						string zozCis[velkostZoznamu] = {};
						string zozM[velkostZoznamu] = {};
						string zozMen[velkostZoznamu] = {};
						int omegaroll = 0;
						for (int i = 0; i < velkostZoznamu; i++) {
							if (zoznamC[i] != "") {
								zozC[omegaroll] = zoznamC[i];
								zozCis[omegaroll] = zoznamCis[i];
								zozM[omegaroll] = zoznamM[i];
								zozMen[omegaroll] = zoznamMen[i];
								omegaroll++;
							}
						}
						for (int i = 0; i < velkostZoznamu; i++) {
							zoznamC[i] = zozC[i];
							zoznamCis[i] = zozCis[i];
							zoznamM[i] = zozM[i];
							zoznamMen[i] = zozMen[i];
						}

					}
					else {
						zoznamC[pc - 1] = "";
						zoznamCis[pc - 1] = "";
						zoznamM[pc - 1] = "";
						zoznamMen[pc - 1] = "";
						string zozC[velkostZoznamu] = {};
						string zozCis[velkostZoznamu] = {};
						string zozM[velkostZoznamu] = {};
						string zozMen[velkostZoznamu] = {};
						int omegaroll = 0;
						for (int i = 0; i < velkostZoznamu; i++) {
							if (zoznamC[i] != "") {
								zozC[omegaroll] = zoznamC[i];
								zozCis[omegaroll] = zoznamCis[i];
								zozM[omegaroll] = zoznamM[i];
								zozMen[omegaroll] = zoznamMen[i];
								omegaroll++;
							}
						}
						for (int i = 0; i < velkostZoznamu; i++) {
							zoznamC[i] = zozC[i];
							zoznamCis[i] = zozCis[i];
							zoznamM[i] = zozM[i];
							zoznamMen[i] = zozMen[i];
						}
					}

						dlzkazoz--;
						system("cls");

						vypiszoz(zoznamMen, zoznamCis);
					
				}
				if (chose == 2) {
					if (dlzkazoz >= velkostZoznamu) {
						system("cls");
						cout << "Zoznam je prilis velky " << endl;
						vypiszoz(zoznamMen, zoznamCis);
					}
					else {
						string first;
						string last;
						string qq;
						string ww;
						string ee;
						system("cls");
						cout << "Napis meno, priezvisko a telefonne cislo napr.: Michal Franc 0907 456 123" << endl;
						cin >> first >> last;
						cin >> qq >> ww >> ee;
						system("cls");
						zoznamMen[dlzkazoz] = last + " " + first;
						zoznamM[dlzkazoz] = last + first;
						zoznamCis[dlzkazoz] = qq + " " + ww + " " + ee;
						zoznamC[dlzkazoz] = qq + ww + ee;
						dlzkazoz++;
						vypiszoz(zoznamMen, zoznamCis);
					}
				}			
			}
		}
	}
		else if (b == 20) {
			int ress = 1;
			while (ress == 1) {
				int k = 0;
				cout << "Dobre teda, napis jej/jeho telefonne cislo alebo priezvisko a meno bez medzier napr.: CvachoPavol alebo 0907305451" << endl;
				cin >> cislo;
				for (int g = 0; g < 10; g++) {

					if (cislo == zoznamC[g]) {

						cout << "Vytacam osobu " << zoznamMen[g] << endl;
						k = 2;
						ress = 2;
					}
					else if (cislo == zoznamM[g]) {
						cout << "Vytacam osobu s cislom " << zoznamCis[g] << endl;
						k = 2;
						ress = 2;
					}
				}
				if (k < 1) {
					system("cls");
					cout << "Bohuzial, nenasli sme nikoho kto by mal take cislo " << endl;
					cout << "1. Znova" << endl;
					cout << "2. Odchadzam" << endl;
					cin >> ress;
					system("cls");
				}
			}
		}
		cout << "Have a great day :)" << endl;
		return 0;
	}





