#include "Operation5.h"

Operation5::Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }

Operation5::Operation5(){ Compteur::ajouterConstructeur(); }

Operation5::~Operation5(){ Compteur::ajouterDestructeur(); }

bool Operation5::effectuerOperation(Dechet* dechet)
{

    bool toReturn = false;
    if (dechet->getMateriel() == VEGETAL && dechet->getCouleur() == "vert") {
        toReturn = true;
    }
    return toReturn;
}