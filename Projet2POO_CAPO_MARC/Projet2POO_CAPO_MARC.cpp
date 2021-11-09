#include <iostream>
//#include "Dechet.h"
#include "UQAC.h"
#include "GenerateurSequenceOperations.h"

using namespace std;

void laboratoire2() {

    ChargementDechet* chargement = UQAC::getChargementDechet();

    UsineTraitement* usineTraitement = new UsineTraitement();
    GenerateurSequenceOperations gso;

    usineTraitement->chargerOperations(gso.genererSequence(0, usineTraitement));
    usineTraitement->demarrerTraitements(chargement);

    delete usineTraitement;
}


void AfficherInformations() {
    cout << endl << endl;
    cout << endl << " --------------------------" << endl
        << " NB constructeurs       : " << Compteur::getNbConstructeurs() << endl
        << " NB constructeurs copie : " << Compteur::getNbConstructeursCopie() << endl
        << " NB destructeurs        : " << Compteur::getNbDestructeurs() << endl;
}

int main()
{
    laboratoire2();
    AfficherInformations();
}

