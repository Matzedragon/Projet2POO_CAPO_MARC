#include "Operation6.h"

Operation6::Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) {}

Operation6::Operation6(){}

Operation6::~Operation6(){}

bool Operation6::effecterOperation(Dechet* dechet)
{
    bool toReturn = false;
    if (dechet->getType() == 0 && dechet->getType() == 6 && dechet->getType() == PLASTIQUE) {
        toReturn = true;
    }
    return toReturn;
}