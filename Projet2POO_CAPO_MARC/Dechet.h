#pragma once
#include <string>
#include "Materiel.h"

using namespace std;

class Dechet
{
private:
	int poids;
	int id;
	string description;
	int type;
	string couleur;
	Materiel materiel;
	int purete;
	bool styromousse;
	bool rigide;
	static int idCourant; // TODO souligné dans le graphique, static ?

public:
	Dechet();
protected:
	Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStrynomousse, bool rigide);
	Dechet(int poids, string description);
public:
	int			getPoids()const { return poids; }
	string		getDescription()const { return description; }
	int			getType() const { return type; }
	int			getId()const { return id; }
	string		getCouleur() const { return couleur; }
	Materiel	getMateriel()const { return materiel; }
	int			getPurete() const { return purete; }
	bool		estStyromousse() const { return styromousse;}
	bool		estRigide() const { return rigide; }

	void setPoids(int poids);
	void setDescription(string description);
	void setType(int type);
	void setCouleur(string couleur);
	void setPurete(int purete);
};
