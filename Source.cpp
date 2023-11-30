#include <iostream>
#include<fstream>
#include<vector>

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
		<< this->oreLucrateSaptamana << "\nSalariu: ";
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
		this->diagnostic = "Dementa";
		this->numarPastileAdministrate = new int[this->minuteAsteptateDePacient];
		for (int i = 0; i < this->minuteAsteptateDePacient; i++) {
			this->numarPastileAdministrate[i] = 0.1 * i;
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
		<< "\n Numarul de minute asteptate de pacient: " << this->minuteAsteptateDePacient
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

class Spital {
private:
	Personal personalSpital; 
	std::string numeSpital;
	int capacitateMaxima;
	std::vector<Pacient> listaPacienti;
	Aparatura aparaturaSpital;

public:
	
	Spital(const Personal& personal, const std::string& nume, int capacitate, const std::vector<Pacient>& pacienti, const Aparatura& aparatura)
		: personalSpital(personal), numeSpital(nume), capacitateMaxima(capacitate), listaPacienti(pacienti), aparaturaSpital(aparatura) {}

	
	std::string getNumeSpital() const {
		return numeSpital;
	}

	void setNumeSpital(const std::string& nume) {
		numeSpital = nume;
	}

	int getCapacitateMaxima() const {
		return capacitateMaxima;
	}
	void setCapacitateMaxima(int capacitate) {
		capacitateMaxima = capacitate;
	}

	
	std::vector<Pacient> getListaPacienti() const {
		return listaPacienti;
	}

	void setListaPacienti(const std::vector<Pacient>& pacienti) {
		listaPacienti = pacienti;
	}

	
	Aparatura getAparaturaSpital() const {
		return aparaturaSpital;
	}

	void setAparaturaSpital(const Aparatura& aparatura) {
		aparaturaSpital = aparatura;
	}
	Spital& operator=(const Spital& other) {
		if (this != &other) {
			personalSpital = other.personalSpital;
			numeSpital = other.numeSpital;
			capacitateMaxima = other.capacitateMaxima;
			listaPacienti = other.listaPacienti;
			aparaturaSpital = other.aparaturaSpital;
		}
		return *this;
	}

	
	bool operator==(const Spital& other) const {
		return numeSpital == other.numeSpital && capacitateMaxima == other.capacitateMaxima &&
			listaPacienti == other.listaPacienti && aparaturaSpital == other.aparaturaSpital;
	}

	friend std::ostream& operator<<(std::ostream& os, const Spital& spital) {
		os << "Nume Spital: " << spital.numeSpital << "\nCapacitate Maxima: " << spital.capacitateMaxima
			<< "\nPersonal Spital: " << spital.personalSpital.getNumeAngajat() << "\nAparatura Spital: "
			<< spital.aparaturaSpital.getNumeAparatura();
		return os;

	}
};

void functieGlobalaSpital(const Spital& spital) {
	std::cout << "Functie globala pentru spitalul " << spital.getNumeSpital() << std::endl;
}

class Medic : public Personal {
private:
	std::string specializareMedica;
	int experientaAni;

public:
	
	Medic(std::string nume, std::string specializare, int oreLucrate, int anAngajare,
		int* salariu, std::string specializareMedica, int experienta)
		: Personal(nume, specializare, oreLucrate, anAngajare, salariu),
		specializareMedica(specializareMedica), experientaAni(experienta) {}

	
	std::string getSpecializareMedica() const {
		return specializareMedica;
	}

	void setSpecializareMedica(const std::string& specializare) {
		specializareMedica = specializare;
	}
	int getExperientaAni() const {
		return experientaAni;
	}

	void setExperientaAni(int experienta) {
		experientaAni = experienta;
	}

};

class EchipamentMedical : public Aparatura {
private:
	std::string producator;
	bool garantie;

public:

	EchipamentMedical(std::string numeAparatura, int numarAparatura, int anCumparare,
		int* numarReparatiiAparatura, std::string producator, bool garantie)
		: Aparatura(numeAparatura, numarAparatura, anCumparare, numarReparatiiAparatura),
		producator(producator), garantie(garantie) {}
	std::string getProducator() const {
		return producator;
	}

	void setProducator(const std::string& numeProducator) {
		producator = numeProducator;
	}

	bool areGaranție() const {
		return garantie;
	}

	void setGaranție(bool areGaranție) {
		garantie = areGaranție;
	}
};

int main() {
	Personal personal("Ion Popescu", "Medic", 35, 2005, new int[40]()); 
	std::vector<Pacient> pacienti; 
	Aparatura aparatura("Ecograf", 1, 2015, new int[10]()); 

	
	Spital spital(personal, "Spitalul Central", 100, pacienti, aparatura);

	
	std::cout << spital << std::endl;


	functieGlobalaSpital(spital);
	Medic medic("Dr. Ana Maria", "Cardiolog", 40, 2010, new int[40](), "Cardiologie", 15);

	
	EchipamentMedical ecg("ECG Monitor", 1, 2018, new int[5](), "Philips", true);

	
	Personal* personalMedic = &medic;

	
	Aparatura* aparaturaEcg = &ecg;

	afisareInformatii(*personalMedic);
	afisareInformatii(*aparaturaEcg);


	return 0;

}