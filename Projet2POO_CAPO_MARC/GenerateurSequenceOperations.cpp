#include "GenerateurSequenceOperations.h"

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{

    SequenceOperations* sequenceOp = new SequenceOperations();
    CreationDechetTraiteRecyclable* CreationDTR = new CreationDechetTraiteRecyclable(usineTraitement);
    CreationDechetTraiteNonRecyclable* CreationDTNR = new CreationDechetTraiteNonRecyclable(usineTraitement);
    CreationDechetTraiteCompostable* CreationDTC = new CreationDechetTraiteCompostable(usineTraitement);
    Operation6* O6 = new Operation6(CreationDTNR, CreationDTR);
    Operation5* O5 = new Operation5(CreationDTNR, CreationDTC);
    Operation4* O4 = new Operation4(CreationDTC, O5);
    Operation3* O3 = new Operation3(CreationDTR, O4);
    Operation2* O2 = new Operation2(O6, O3);
    Operation1* O1 = new Operation1(CreationDTNR, O2);

    return sequenceOp->ajouterOperation(O1);
}

SequenceOperations* GenerateurSequenceOperations::genererSequence1(UsineTraitement* usineTraitement)
{
    return nullptr;
}

GenerateurSequenceOperations::GenerateurSequenceOperations()
{
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
