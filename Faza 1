# Miscu_Bianca_ProiectPOO
//Domeniul- Ambulanta, Obiecte- Angajat, Pacient, Aparatura
#include <iostream>
using namespace std;
class Personal {
public:
	string numeAngajat;
	string specializare;
	int oreLucrateSaptamana;
	static float TVA;
	const int anAngajare;
	int* salariu;

	Personal() : anAngajare(2000) {
		this->numeAngajat = "Nicolae Maria";
		this->specializare = "Generalist";
		this->oreLucrateSaptamana = 40;
		this->salariu = new int[this->oreLucrateSaptamana];
		for (int i = 0; i < this->oreLucrateSaptamana; i++) {
			this->salariu[i] = 30 * i;
		}
	}

	Personal(string nume, string specializare, int numarPersonal, const int an, int* salariu) : anAngajare(an) {
		this->numeAngajat = nume;
		this->specializare = specializare;
		this->salariu = new int[this->oreLucrateSaptamana];
		for (int i = 0; i < this->oreLucrateSaptamana; i++) {
			this->salariu[i] = salariu[i];
		}

	}

void afisareAngajat() {
	cout << "Nume: " << this->numeAngajat << "\nSpecializare: " << this->specializare << "\n Numar de ore lucrate pe saptamana:" 
		<< this->oreLucrateSaptamana<< "\nSalariu: ";
	for (int i = 0; i < this->oreLucrateSaptamana; i++) {
		cout << this->salariu[i] << " , ";
	}
	cout << endl;
}
static void setTVA(float TVAnou) {
	TVA = TVAnou;
}
};

class Pacient {
public:
	string numePacient;
	string diagnostic;
	int varsta;
	static float ID;
	const int minuteAsteptateDePacient;
	int* numarPastileAdministrate;

	Pacient() : minuteAsteptateDePacient(70) {
		this->numePacient = "Andrei Stefania";
		this->diagnostic= "Dementa";
		this->minuteAsteptateDePacient = 30;
		this->numarPastileAdministrate = new int[this-> minuteAsteptateDePacient];
		for (int i = 0; i < this->minuteAsteptateDePacient; i++) {
			this->numarPastileAdministrate[i] = 0.1* i;
		}
	}

	Pacient(string numePacient, string diagnostic, int minuteAsteptateDePacient, const int minuteAsteptate, 
		int* numarPastileAdministrate) : minuteAsteptateDePacient(minuteAsteptate) {
		this->numePacient = numePacient;
		this->diagnostic = diagnostic;
		this->numarPastileAdministrate = new int[this->minuteAsteptateDePacient];
		for (int i = 0; i < this->minuteAsteptateDePacient; i++) {
			this->numarPastileAdministrate[i] = numarPastileAdministrate[i];
		}

	}

	void afisarePacient() {
		cout << "Nume pacient: " << this->numePacient << "\nDiagnostic " << this->diagnostic 
			<< "\n Numarul de minute asteptate de pacient: "<< this->minuteAsteptateDePacient 
			<< "\nNumarul de pastile administrate pacientului: ";
		for (int i = 0; i < this->minuteAsteptateDePacient; i++) {
			cout << this->numarPastileAdministrate[i] << " , ";
		}
		cout << endl;
	}
	static void setID(float IDnou) {
		ID = IDnou;
	}
};

class Aparatura {
public:
	string numeAparatura;
	int numarAparatura;
	static float TIP;
	const int anCumparareAparatura;
	int* numarReparatiiAparatura;

	Aparatura(string numeAparatura, int numarAparatura, const int anCumparare,
		int* numarReparatiiAparatura) : anCumparareAparatura(anCumparare) {
		this->numeAparatura = numeAparatura;
		this->numarReparatiiAparatura = new int[this->anCumparareAparatura];
		for (int i = 0; i < this->anCumparareAparatura; i++) {
			this->numarReparatiiAparatura[i] = numarReparatiiAparatura[i];
		}

	}

	Aparatura() : anCumparareAparatura(2010) {
		this->numeAparatura = "Defibrilator";
		this->numarAparatura = 2;
		this->numarReparatiiAparatura = new int[this->numarReparatiiAparatura];
		for (int i = 0; i < this->anCumparareAparatura; i++) {
			this->numarReparatiiAparatura[i] = 0.1 * i;
		}
	}

	void afisareAparatura() {
		cout << "Nume aparatura: " << this->numeAparatura << "\n Numar aparatura: " 
			<< this->numarAparatura<< "\nNumarul de reparatii ale aparaturii ";
		for (int i = 0; i < this->anCumparareAparatura; i++) {
			cout << this->numarReparatiiAparatura[i];
		}
		cout << endl;
	}
	static void setTIP(float TIPnou) {
		TIP = TIPnou;
	}
};

void main() {
	
	Personal angajat1;  
	Personal angajat2("Ana", "Medic", 2010, new int[40]());  
	Personal angajat3;
	angajat3.numeAngajat = "Ioana";
	angajat3.specializare = "Asistent";
	angajat3.oreLucrateSaptamana = 35;
	angajat3.salariu = new int[35];
	for (int i = 0; i < 35; i++) {
		angajat3.salariu[i] = 25 * i;
	}

	angajat1.afisareAngajat();
	angajat2.afisareAngajat();
	angajat3.afisareAngajat();


	Pacient pacient1;  
	Pacient pacient2("Mihai", "Hipertensiune", 60, new int[60]());  
	Pacient pacient3;
	pacient3.numePacient = "Elena";
	pacient3.diagnostic = "Diabet";
	pacient3.minuteAsteptateDePacient = 45;
	pacient3.numarPastileAdministrate = new int[45];
	for (int i = 0; i < 45; i++) {
		pacient3.numarPastileAdministrate[i] = 0.2 * i;
	}

	pacient1.afisarePacient();
	pacient2.afisarePacient();
	pacient3.afisarePacient();

	
	Aparatura aparatura1;  
	Aparatura aparatura2("Ecograf", 3, 2015, new int[11]());  
	Aparatura aparatura3;
	aparatura3.numeAparatura = "Radiograf";
	aparatura3.numarAparatura = 1;
	aparatura3.anCumparareAparatura = 2018;
	aparatura3.numarReparatiiAparatura = new int[3]();
	aparatura3.numarReparatiiAparatura[0] = 2;
	aparatura3.numarReparatiiAparatura[1] = 1;
	aparatura3.numarReparatiiAparatura[2] = 3;

	aparatura1.afisareAparatura();
	aparatura2.afisareAparatura();
	aparatura3.afisareAparatura();

	return 0;
}
