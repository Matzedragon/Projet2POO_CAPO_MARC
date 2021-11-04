#pragma once
#include "SequenceOperations.h"
#include "CamionBleu.h"
#include "CamionVert.h"
#include "CamionBrun.h"
#include "Depot.h"
#include "ChargementDechet.h"

class UsineTraitement
{
private:
	SequenceOperations* m_sequenceOperations;
	Depot m_depot;
	CamionBleu* m_camionBleu;
	CamionVert* m_camionVert;
	CamionBrun* m_camionBrun;
	void preOperation();
	void postOperation();
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
	void traiteDechet(Dechet* dechet);
	friend class OperationTraitement;
public:
	UsineTraitement();
	~UsineTraitement();
	void chargerOperations(SequenceOperations* sequenceOperations);
	void demarrerTraitements(ChargementDechet* chargement);

	class Log {
		static void i(string info);
		static void i(Dechet const& dechet);
		static void i(Depot const& depot);
	};
};

