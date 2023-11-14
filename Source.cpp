#include <iostream>
using namespace std;

class Personal {


	string numeAngajat;
	string specializare;
	int oreLucrateSaptamana;
	static float TVA;
	const int anAngajare;
	int* salariu;

public:

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
	Personal(const Personal& personal) : anAngajare(personal.anAngajare) {
		this->numeAngajat = personal.numeAngajat;
		this->specializare = personal.specializare;
		this->oreLucrateSaptamana = personal.oreLucrateSaptamana;
		this->salariu = new int[this->oreLucrateSaptamana];
		for (int i = 0; i < this->oreLucrateSaptamana; i++) {
			this->salariu[i] = personal.salariu[i];
		}
	}

	~Personal() {
		delete[] this->salariu;
	}

	string getNumeAngajat() {
		return this->numeAngajat;
	}

	void setNumeAngajat(string nume) {
		this->numeAngajat = nume;
	}

	string getSpecializare() {
		return this->specializare;
	}

	void setSpecializare(string specializare) {
		this->specializare = specializare;
	}

	int getOreLucrateSaptamana() {
		return this->oreLucrateSaptamana;
	}

	void setoreLucrateSaptamana(int oreLucrateSaptamana) {
		this->oreLucrateSaptamana = oreLucrateSaptamana;
	}

	const int anAngajare() {
		return this->anAngajare;
	}

	void setanAngajare(const int anAngajare) {
	}
	
	Personal& operator=(const Personal& personal) {
		if (this != &personal) {
			numeAngajat = personal.numeAngajat;
			specializare = personal.specializare;
			oreLucrateSaptamana = personal.oreLucrateSaptamana;
		}
		return *this;
	}

	

	friend void afisareInformatii(const Personal& pers) {
		std::cout << "Nume: " << pers.numeAngajat << std::endl;
		std::cout << "Specializare: " << pers.specializare << std::endl;
		std::cout << "Ore lucrate/saptamana: " << pers.oreLucrateSaptamana << std::endl;
	
	}
};

void afisareAngajat() {
	cout << "Nume: " << this->numeAngajat << "\nSpecializare: " << this->specializare << "\n Numar de ore lucrate pe saptamana:" 
		<< this->oreLucrateSaptamana<< "\nSalariu: ";
	for (int i = 0; i < this->oreLucrateSaptamana; i++) {
		cout << this->salariu[i] << " , ";
	}
	cout << endl;
}
static void setTVA(float TVAnou) {
	float TVA = TVAnou;
}
static float getTVA() {
	return TVA;
}

friend void functieGlobalaPersonal(const Personal& angajat);


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
	Pacient(const Pacient& pacient) : minuteAsteptateDePacient(pacient.minuteAsteptateDePacient) {
		this->numePacient = pacient.numePacient;
		this->diagnostic = pacient.diagnostic;
		this->varsta = pacient.varsta;
		this->numarPastileAdministrate = new int[this->minuteAsteptateDePacient];
		for (int i = 0; i < this->minuteAsteptateDePacient; i++) {
			this->numarPastileAdministrate[i] = pacient.numarPastileAdministrate[i];
		}
	}

	~Pacient() {
		delete[] this->numarPastileAdministrate;
	}

	string getNumePacient() {
		return this->numePacient;
	}

	void setNumePacient(string nume) {
		this->numePacient = nume;
	}

	string getDiagnostic() {
		return this->diagnostic;
	}

	void setDiagnostic(string diagnostic) {
		this->diagnostic = diagnostic;
	}

	int getVarsta() {
		return this->varsta;
	}

	void setVarsta(int varsta) {
		this->varsta = varsta;
	}

	const int minuteAsteptateDePacient() {
		return this->minuteAsteptateDePacient;
	}

	void setminuteAsteptateDePacient(const int minuteAsteptateDePacient) {
	}

	Pacient& operator=(const Pacient& other) {
		if (this != &other) {
			numePacient = other.numePacient;
			diagnostic = other.diagnostic;
			varsta = other.varsta;
		}
		return *this;
	}

	friend void afisareInformatii(const Pacient& pac) {
		std::cout << "Nume Pacient: " << pac.numePacient << std::endl;
		std::cout << "Diagnostic: " << pac.diagnostic << std::endl;
		std::cout << "Varsta: " << pac.varsta << std::endl;
	}
};
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
	static float getID() {
		return ID;
	}

	friend void functieGlobalaPacient(const Pacient& pacient);

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
			this->numarReparatiiAparatura = new int[this->anCumparareAparatura];
			for (int i = 0; i < this->anCumparareAparatura; i++) {
				this->numarReparatiiAparatura[i] = 0.1 * i;
			}
		}
		Aparatura(const Aparatura& aparatura) : anCumparareAparatura(aparatura.anCumparareAparatura) {
			this->numeAparatura = aparatura.numeAparatura;
			this->numarAparatura = aparatura.numarAparatura;
			this->numarReparatiiAparatura = new int[this->anCumparareAparatura];
			for (int i = 0; i < this->anCumparareAparatura; i++) {
				this->numarReparatiiAparatura[i] = aparatura.numarReparatiiAparatura[i];
			}
		}

		~Aparatura() {
			delete[] this->numarReparatiiAparatura;
		}

		string getNumeAparatura() {
			return this->numeAparatura;
		}

		void setNumeAparatura(string nume) {
			this->numeAparatura = nume;
		}

		int getNumarAparatura() {
			return this->numarAparatura;
		}

		void setNumarAparatura(int numarAparatura) {
			this->numarAparatura = numarAparatura;
		}

		 const int anCumparareAparatura() {
			return this->anCumparareAparatura;
		}

		void setanCumparareAparatura(const int anCumparareAparatura) {
		}

		Aparatura& operator=(const Aparatura& other) {
			if (this != &other) {
				numeAparatura = other.numeAparatura;
				numarAparatura = other.numarAparatura;
			}
			return *this;
		}

		
		Aparatura operator-(const Aparatura& aparatura) const {
			Aparatura diferenta = *this;
			diferenta.numarAparatura -= aparatura.numarAparatura;
			return diferenta;
		}
		friend void afisareInformatii(const Aparatura& aparatura) {
			std::cout << "Nume Aparatura: " << aparatura.numeAparatura << std::endl;
			std::cout << "Numar Aparatura: " << aparatura.numarAparatura << std::endl;
		}
	};
		void afisareAparatura() {
			cout << "Nume aparatura: " << this->numeAparatura << "\n Numar aparatura: "
				<< this->numarAparatura << "\nNumarul de reparatii ale aparaturii ";
			for (int i = 0; i < this->anCumparareAparatura; i++) {
				cout << this->numarReparatiiAparatura[i];
			}
			cout << endl;
		}

		static void setTIP(float TIPnou) {
			TIP = TIPnou;
		}

		static float getTIP() {
			return TIP;
		}

		friend void functieGlobalaAparatura(const Aparatura& aparatura);


		void main() {

			

	}
