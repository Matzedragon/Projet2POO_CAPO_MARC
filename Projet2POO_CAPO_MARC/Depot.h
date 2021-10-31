#pragma once
#include <ostream>
#include "CamionBleu.h"
#include "CamionVert.h"
#include "CamionBrun.h"
using namespace std;

class Depot
{
private:
	int m_totalDTRecyclable;
	int m_totalDTNonRecyclable;
	int m_totalDTCompostable;
public:
	Depot();
	~Depot() {}
	CamionBleu* getCamionBleu();
	CamionVert* getCamionVert();
	CamionBrun* getCamionBrun();
	void depotDechetsTraites(CamionBleu* camion);
	void depotDechetsTraites(CamionVert* camion);
	void depotDechetsTraites(CamionBrun* camion);
	

	friend ostream& operator<<(ostream& out, const Depot& depot);
};

