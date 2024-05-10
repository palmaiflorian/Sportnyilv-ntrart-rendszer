
#include "Foci.h"

Foci::Foci(char* nev,int letszam,int p):Csapat(nev,letszam),edzoszam(p) {}
void Foci::setedzo(int edzo)
{
    edzoszam=edzo;
}
int Foci::getedzo()const
{
    return edzoszam;
}

void Foci::kiir() const {
    cout << "A focicsapat neve: " << this->nev << ", a letszama: " << this->letszam <<", edzok szama: "<<getedzo()<<endl;
}

