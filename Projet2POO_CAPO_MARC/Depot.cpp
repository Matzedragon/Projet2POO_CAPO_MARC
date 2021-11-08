#include "Depot.h"
#include <iomanip>

Depot::Depot()
{
    m_totalDTCompostable = 0;
    m_totalDTNonRecyclable = 0;
    m_totalDTRecyclable = 0;
}

Depot::~Depot()
{
}

CamionBleu* Depot::getCamionBleu()
{
    return new CamionBleu(80);
}

CamionVert* Depot::getCamionVert()
{
    return new CamionVert(80);
}

CamionBrun* Depot::getCamionBrun()
{
    return new CamionBrun(80);
}

void Depot::depotDechetsTraites(CamionBleu* camion)
{
    m_totalDTRecyclable += camion->viderCamion();
    delete camion;
}

void Depot::depotDechetsTraites(CamionVert* camion)
{
    m_totalDTNonRecyclable += camion->viderCamion();
    delete camion;
}

void Depot::depotDechetsTraites(CamionBrun* camion)
{
    m_totalDTCompostable += camion->viderCamion();
    delete camion;
}

ostream& operator<<(ostream& out, const Depot& depot)
{
	string description = "totalDTNonRecyclable: ";
	size_t fieldWidth = description.size() + 1;

	out << "-- DEPOT -- " << endl 
        << setw(fieldWidth) << left << "totalDTRecyclable: " << depot.m_totalDTRecyclable << right << endl
        << setw(fieldWidth) << left << "totalDTNonRecyclable: " << depot.m_totalDTNonRecyclable << right << endl
        << setw(fieldWidth) << left << "totalDTCompostable: " << depot.m_totalDTCompostable << right << endl
		<< "--------------------------------------------------" << endl;
	return out;
}