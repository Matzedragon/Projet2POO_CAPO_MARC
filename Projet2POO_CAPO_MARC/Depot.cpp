#include "Depot.h"

Depot::Depot()
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
    // TODO: insérer une instruction return ici
}
