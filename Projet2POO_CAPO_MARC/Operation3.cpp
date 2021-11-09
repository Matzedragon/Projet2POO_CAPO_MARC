#include "Operation3.h"

Operation3::Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) { Compteur::ajouterConstructeur(); }

Operation3::Operation3() { Compteur::ajouterConstructeur(); }

Operation3::~Operation3() { Compteur::ajouterDestructeur(); }

bool Operation3::effectuerOperation(Dechet* dechet)
{

    bool toReturn = false;
    if (dechet->getMateriel() == CARTON ||dechet->getMateriel() == PAPIER) {
        toReturn = true;
    }
    return toReturn;
}