#include "Operation4.h"

Operation4::Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) {}

Operation4::Operation4(){}

Operation4::~Operation4(){}

bool Operation4::effecterOperation(Dechet* dechet)
{
    bool toReturn = false;
    if (dechet->getMateriel() == NOURRITURE && dechet->getCouleur() == "brun") {
        toReturn = true;
    }
    return toReturn;
}