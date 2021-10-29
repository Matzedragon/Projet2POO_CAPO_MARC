#include "Dechet.h"

Dechet::Dechet()
{
	poids = 0;
	id = 0;		// TODO 
	description = "Quelque chose";
	type = 0;
	couleur = "inconnue";
	materiel = INCONNU;
	purete = 100;
	styromousse = false;
	rigide = true;
	// TODO idcourant
}	

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStrynomousse, bool rigide) : Dechet::Dechet()
{
	setPoids(poids);
	setDescription(description);
	setType(type);
	setCouleur(couleur);
	this->materiel = materiel;
	setPurete(purete);
	this->styromousse = estEnStrynomousse;
	this->rigide = rigide;
}

Dechet::Dechet(int poids, string description) : Dechet::Dechet()
{
	setPoids(poids);
	setDescription(description);
}
