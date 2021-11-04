#include "UsineTraitement.h"
#include <iostream>
void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	DechetTraiteNonRecyclable* tempo = new DechetTraiteNonRecyclable(dechet);
	// tant qu'on peut pas ajouter dans le camion vert on tente de vide/cr�er le camion
	while(!m_camionVert->ajouterDechet(tempo)) {
		m_depot.depotDechetsTraites(m_camionVert);
		m_camionVert = new CamionVert();
	}
	Log::i("Ajout DTR: " + to_string(dechet->getId()));
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
	// tant qu'on peut pas ajouter dans le camion bleu on tente de vide/cr�er le camion
	while (!m_camionBleu->ajouterDechet(tempo)) {
		m_depot.depotDechetsTraites(m_camionBleu);
		m_camionBleu = new CamionBleu();
	}
	Log::i("Ajout DTR: " + to_string(dechet->getId()));
}

void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	DechetTraiteCompostable* tempo = new DechetTraiteCompostable(dechet);
	// tant qu'on peut pas ajouter dans le camion brun on tente de vide/cr�er le camion
	while (!m_camionBrun->ajouterDechet(tempo)) {
		m_depot.depotDechetsTraites(m_camionBrun);
		m_camionBrun = new CamionBrun();
	}
	Log::i("Ajout DTR: " + to_string(dechet->getId()));
}

void UsineTraitement::traiteDechet(Dechet* dechet)
{
	bool choixSuivant;
	Operation* courant = m_sequenceOperations->getOperationDemarrage();
	while (courant != nullptr) {
		preOperation();
		choixSuivant = courant->effecterOperation(dechet);
		postOperation();
		courant = courant->getOperationSuivante(choixSuivant);
	}
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
	delete m_camionBleu, m_camionVert, m_camionBrun, m_sequenceOperations;
}

void UsineTraitement::chargerOperations(SequenceOperations* sequenceOperations)
{
	m_sequenceOperations = sequenceOperations;
}

void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	// pour tous les �l�ments dans la liste de dechet de chargement on appel traiterDechet
	auto dechetCourant = chargement->getDechet()->begin();
	for (dechetCourant; dechetCourant != chargement->getDechet()->end(); ++dechetCourant) {
		Log::i("Traitement du dechet" + to_string((*dechetCourant)->getId()));
		traiteDechet(*dechetCourant);
	}
	delete chargement;
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
