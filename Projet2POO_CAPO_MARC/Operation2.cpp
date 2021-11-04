#include "Operation2.h"

Operation2::Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) {}


Operation2::Operation2(){}

Operation2::~Operation2(){}

bool Operation2::effectuerOperation(Dechet* dechet)
{

    bool toReturn = false;
    if (dechet->getType() != 0 || dechet->getType() == PLASTIQUE) {
        toReturn = true;
    }
    return toReturn;
}
