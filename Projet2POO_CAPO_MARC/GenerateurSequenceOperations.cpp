#include "GenerateurSequenceOperations.h"

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{
    SequenceOperations* sequenceOp = new SequenceOperations();
    sequenceOp->ajouterOperation(new Operation1(new CreationDechetTraiteNonRecyclable(usineTraitement), new Operation2()));
    sequenceOp->ajouterOperation(new Operation2(new Operation6(), new Operation3()));
    sequenceOp->ajouterOperation(new Operation3(new CreationDechetTraiteRecyclable(usineTraitement), new Operation4()));
    sequenceOp->ajouterOperation(new Operation4(new CreationDechetTraiteCompostable(usineTraitement), new Operation5()));
    sequenceOp->ajouterOperation(new Operation4(new CreationDechetTraiteNonRecyclable(usineTraitement), new CreationDechetTraiteCompostable(usineTraitement)));
    sequenceOp->ajouterOperation(new Operation6(new CreationDechetTraiteNonRecyclable(usineTraitement), new CreationDechetTraiteRecyclable(usineTraitement)));
}

SequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement)
{
    SequenceOperations* returned;
    switch (id) {
    case 0:
        returned =  genererSequence0(usineTraitement);
        break;
    default:
        returned =  genererSequence1(usineTraitement);
    }
    return returned;
}
