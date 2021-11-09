#include <iostream>
#include <crtdbg.h>
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
    cout << endl << " --------------------------" << endl
        << " NB constructeurs       : " << Compteur::getNbConstructeurs() << endl
        << " NB constructeurs copie : " << Compteur::getNbConstructeursCopie() << endl
        << " NB destructeurs        : " << Compteur::getNbDestructeurs() << endl;
}

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    laboratoire2();
    AfficherInformations();
}

