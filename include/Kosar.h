#ifndef KOSAR_H
#define KOSAR_H
#include "Csapat.h"

class Kosar:public Csapat
{
    public:
        virtual ~Kosar(){}
        Kosar(char*,int,int );
        void setpompom(int );
        int getpompom()const;
        void kiir()const override;

    private:
        int pompom;
};

#endif // KOSAR_H
