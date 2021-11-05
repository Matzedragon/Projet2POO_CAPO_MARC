#pragma once 
using namespace std;

class Compteur {
private:
	int constructeur;
	int constructeurCopie;
	int destructeur;
public:
	Compteur();
	~Compteur();

	void ajouterConstructeur()const;
	void ajouterConstructeurCopie()const;
	void ajouterDestructeur()const;
	void getNbConstructeurs()const { return constructeur; }
	void getNbConstructeursCopie()const { return constructeurCopie; }
	void getNbDestructeurs()const { return destructeur; }

	friend ostream& operator<<(ostream& out, const Depot& cpt);
};