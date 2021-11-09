#include "UQAC.h"
#include <iostream>
#include <ctime>
#include "BoiteCarton.h"
#include "BouteilleBiere.h"
#include "Chaise.h"
#include "FeuillePapier.h"
#include "DechetMalConcu.h"
#include "PlanteVerte.h"
#include "Quelquechose.h"
#include "RestantNourriture.h"
#include "SacChips.h"
#include "VerreCafe.h"

UQAC::UQAC()
{
    Compteur::ajouterConstructeur();
}

ChargementDechet* UQAC::getChargementDechet()
{
    list<Dechet*>* listeDechets = new list<Dechet*>;
    srand(std::time(nullptr));
    for (int i = 0; i < 50; i++) {
        int randDechet = rand() % (9 + 1); // nombre aléatoire entre 0 et 9
        switch (randDechet) {
        case 0:
            listeDechets->push_back(new BoiteCarton());
            break;
        case 1:
            listeDechets->push_back(new BouteilleBiere());
            break;
        case 2:
            listeDechets->push_back(new Chaise());
            break;
        case 3:
            listeDechets->push_back(new FeuillePapier());
            break;
        case 4:
            listeDechets->push_back(new DechetMalConcu());
            break;
        case 5:
            listeDechets->push_back(new PlanteVerte());
            break;
        case 6:
            listeDechets->push_back(new QuelqueChose());
            break;
        case 7:
            listeDechets->push_back(new RestantNourriture());
            break;
        case 8:
            listeDechets->push_back(new SacChips());
            break;
        default:
            listeDechets->push_back(new VerreCafe());
        }
    }
    return new ChargementDechet(listeDechets);
}
