#include <iostream>
#include "Dechet.h"
#include "UQAC.h"
using namespace std;

void laboratoire2() {
    ChargementDechet* chargement = UQAC::getChargementDechet();
    auto l_front = chargement->getDechet()->begin();
    advance(l_front, 0);
    cout << **l_front;
}

int main()
{
    laboratoire2();
    
}

