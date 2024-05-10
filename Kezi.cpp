#include "Kezi.h"


Kezi::Kezi(char* nev,int letszam,int tam):Csapat(nev,letszam),tamogatas(tam)
{

}
void Kezi::settamogatas(int tam)
{
    tamogatas=tam;
}
int Kezi::gettamogatas()const
{
    return tamogatas;
}
void Kezi::kiir()const
{
    cout<<"A kezicsapat neve: "<<this->nev<<", a letszama: "<<this->letszam<<", a kapott tamogatas: "<<gettamogatas()<<endl;
}
