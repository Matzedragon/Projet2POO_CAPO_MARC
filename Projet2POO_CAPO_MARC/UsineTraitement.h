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
	SequenceOperations* sequenceOperations;
	Depot depot;
	CamionBleu* camionBleu;
	CamionVert* camionVert;
	CamionBrun* camionBrun;
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
		void i(string info);
		void i(Dechet const& dechet);
		void i(Depot const& depot);
	}
};

