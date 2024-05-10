#ifndef CSAPAT_H
#define CSAPAT_H
#include <cstring>
#include <iostream>
#include "memtrace.h"
using std::cout;
using std::cin;
using std::endl;
class Csapat
{
    protected:
        char* nev;
        int letszam;

    public:
        virtual ~Csapat()
        {
            delete[] nev;
        }
        Csapat(char*,int );

        void setnev(char*);
        char* getnev();
        void setletszam(int );
        int getletszam()const;
        virtual void kiir()const{};




};


#endif // CSAPAT_H
