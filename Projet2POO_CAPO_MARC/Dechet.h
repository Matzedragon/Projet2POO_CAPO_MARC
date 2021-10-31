#pragma once
#include <string>
#include "Materiel.h"

using namespace std;

class Dechet
{
private:
	int m_poids;
	int m_id;
	string m_description;
	int m_type;
	string m_couleur;
	Materiel m_materiel;
	int m_purete;
	bool m_styromousse;
	bool m_rigide;
	static int m_idCourant;


protected:
	Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStrynomousse, bool rigide);
	Dechet(int poids, string description);
public:
	Dechet();
	~Dechet();
	int			getPoids()const { return m_poids; }
	string		getDescription()const { return m_description; }
	int			getType() const { return m_type; }
	int			getId()const { return m_id; }
	string		getCouleur() const { return m_couleur; }
	Materiel	getMateriel()const { return m_materiel; }
	int			getPurete() const { return m_purete; }
	bool		estStyromousse() const { return m_styromousse;}
	bool		estRigide() const { return m_rigide; }

	friend ostream& operator<<(ostream& out, const Dechet& dechet);

	void setPoids(int poids);
	void setDescription(string description);
	void setType(int type);
	void setCouleur(string couleur);
	void setPurete(int purete);
};
