#pragma once 
using namespace std;

class Compteur 
{
private:
	static int constructeur;
	static int constructeurCopie;
	static int destructeur;
public:
	Compteur();
	static void ajouterConstructeur();
	static void ajouterConstructeurCopie();
	static void ajouterDestructeur();
	static int getNbConstructeurs() { return constructeur; }
	static int getNbConstructeursCopie() { return constructeurCopie; }
	static int getNbDestructeurs() { return destructeur; }
};