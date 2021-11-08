#include "UsineTraitement.h"
#include <iostream>
void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	DechetTraiteNonRecyclable* tempo = new DechetTraiteNonRecyclable(dechet);
	// tant qu'on peut pas ajouter dans le camion vert on tente de vide/créer le camion
	while(!m_camionVert->ajouterDechet(tempo)) {
		m_depot.depotDechetsTraites(m_camionVert);
		m_camionVert = m_depot.getCamionVert();
	}
	Log::i("Ajout DTNR: " + to_string(dechet->getId()));
}

void UsineTraitement::preOperation()
{
	Log::i("PREOPERATION");
}

void UsineTraitement::postOperation()
{
	Log::i("POSTOPERATION");
}

void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	DechetTraiteRecyclable* tempo = new DechetTraiteRecyclable(dechet);
	// tant qu'on peut pas ajouter dans le camion bleu on tente de vide/créer le camion
	while (!m_camionBleu->ajouterDechet(tempo)) {
		m_depot.depotDechetsTraites(m_camionBleu);
		m_camionBleu = m_depot.getCamionBleu();
	}
	Log::i("Ajout DTR: " + to_string(dechet->getId()));
}

void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	DechetTraiteCompostable* tempo = new DechetTraiteCompostable(dechet);
	// tant qu'on peut pas ajouter dans le camion brun on tente de vide/créer le camion
	while (!m_camionBrun->ajouterDechet(tempo)) {
		m_depot.depotDechetsTraites(m_camionBrun);
		m_camionBrun = m_depot.getCamionBrun();
	}
	Log::i("Ajout DTC: " + to_string(dechet->getId()));
}

// TODO appelle la méthode effectuerde Operation et pas celle des fils 
void UsineTraitement::traiteDechet(Dechet* dechet)
{
	bool choixSuivant;
	Operation* courant = m_sequenceOperations->getOperationDemarrage();
	preOperation();
	while (courant != nullptr) {
		choixSuivant = courant->effectuerOperation(dechet);	
		courant = courant->getOperationSuivante(choixSuivant);
	}
	postOperation();
}

UsineTraitement::UsineTraitement()
{
	

	m_depot = Depot();
	m_camionBleu = m_depot.getCamionBleu();
	m_camionVert = m_depot.getCamionVert();
	m_camionBrun = m_depot.getCamionBrun();
	m_sequenceOperations = nullptr;
}

UsineTraitement::~UsineTraitement()
{
	delete m_sequenceOperations;
}

void UsineTraitement::chargerOperations(SequenceOperations* sequenceOperations)
{
	m_sequenceOperations = sequenceOperations;
}

void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	// pour tous les éléments dans la liste de dechet de chargement on appel traiterDechet
	auto dechetCourant = chargement->getDechet()->begin();
	for (dechetCourant; dechetCourant != chargement->getDechet()->end(); ++dechetCourant) {
		Log::i(**dechetCourant);
		traiteDechet(*dechetCourant);
	}
	delete chargement;
	m_depot.depotDechetsTraites(m_camionBleu);
	m_camionBleu = nullptr;
	m_depot.depotDechetsTraites(m_camionVert);
	m_camionVert = nullptr;
	m_depot.depotDechetsTraites(m_camionBrun);
	m_camionBrun = nullptr;
	cout << m_depot << endl;
	Log::i("Fin traitement");
}

void UsineTraitement::Log::i(string info)
{
	cout << info <<endl;
}

void UsineTraitement::Log::i(Dechet const& dechet)
{
	cout << dechet << endl;
}

void UsineTraitement::Log::i(Depot const& depot)
{
	cout << depot << endl;
}
