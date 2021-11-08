#include "Operation4.h"

Operation4::Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) { /* Compteur::ajouterConstructeur(); */ }

Operation4::Operation4(){ /* Compteur::ajouterConstructeur(); */ }

Operation4::~Operation4(){}

bool Operation4::effectuerOperation(Dechet* dechet)
{

    bool toReturn = false;
    if (dechet->getMateriel() == NOURRITURE && dechet->getCouleur() == "brun") {
        toReturn = true;
    }
    return toReturn;
}