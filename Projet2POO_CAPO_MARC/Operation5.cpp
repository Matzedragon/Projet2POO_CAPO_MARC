#include "Operation5.h"

Operation5::Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) {}

Operation5::Operation5(){}

Operation5::~Operation5(){}

bool Operation5::effecterOperation(Dechet* dechet)
{
    bool toReturn = false;
    if (dechet->getMateriel() == VEGETAL && dechet->getCouleur() == "vert") {
        toReturn = true;
    }
    return toReturn;
}