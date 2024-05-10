#include "Csapat.h"




Csapat::Csapat(char* _nev,int _letszam):nev(_nev),letszam(_letszam)
{

}
void Csapat::setnev(char* _nev)
{
    delete[] nev;
    nev=_nev;
}
char* Csapat::getnev()
{
    return nev;
}
void Csapat::setletszam(int letszam)
{
    this->letszam=letszam;
}

