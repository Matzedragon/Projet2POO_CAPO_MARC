#include "Operation1.h"

Operation1::Operation1() {}

bool Operation1::effecterOperation(Dechet* dechet)
{
    bool toReturn = false;
    if (dechet->estRigide() || dechet->estStyromousse()) {
        toReturn = true;
    }
    return toReturn;
}

Operation1::~Operation1()
{
}

Operation1::Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) : Operation(operationSuivanteTrue, operationSuivanteFalse) {}
