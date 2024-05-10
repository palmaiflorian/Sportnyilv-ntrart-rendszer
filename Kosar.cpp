#include "Kosar.h"



Kosar::Kosar(char* nev,int letszam,int p):Csapat(nev,letszam),pompom(p)
{

}
void Kosar::setpompom(int pom)
{
    pompom=pom;
}
int Kosar::getpompom()const
{
    return pompom;
}
void Kosar::kiir()const
{
    cout<<"A kosarcsapat neve: "<<this->nev<<", a letszama: "<<this->letszam<<", pompomlanyok szama: "<<getpompom()<<endl;
}

