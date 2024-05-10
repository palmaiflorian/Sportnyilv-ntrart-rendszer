#ifndef KEZI_H
#define KEZI_H
#include "Csapat.h"

class Kezi: public Csapat
{
    public:
        virtual ~Kezi(){}
        Kezi(char*,int,int );
        void settamogatas(int );
        int gettamogatas()const;
        void kiir()const override;

    private:
        int tamogatas;
};

#endif // KEZI_H
