#include <iostream>
#include "Dechet.h"
#include "UQAC.h"
#include "Depot.h"
#include "UsineTraitement.h"
#include "GenerateurSequenceOperations.h"
using namespace std;

void laboratoire2() {
    // test dechet / chargement
    ChargementDechet* chargement = UQAC::getChargementDechet();
    /*auto l_front = chargement->getDechet()->begin();
    for (auto it = chargement->getDechet()->begin(); it != chargement->getDechet()->end(); ++it) {
        cout << **it;
    }*/
    // test depot / camion
    /*Depot* depot = new Depot();
    CamionBleu* camionBleu = depot->getCamionBleu();
    camionBleu->ajouterDechet(new DechetTraiteRecyclable(new BoiteCarton()));
    depot->depotDechetsTraites(camionBleu);
    cout << *depot;*/
    UsineTraitement* usineTraitement = new UsineTraitement();
    GenerateurSequenceOperations gso;

    usineTraitement->chargerOperations(gso.genererSequence(0, usineTraitement));
    usineTraitement->demarrerTraitements(chargement);

    delete usineTraitement;
}

int main()
{
    laboratoire2();
    
}

