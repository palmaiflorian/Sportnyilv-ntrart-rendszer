#ifndef SPORT_EGYESULET_H
#define SPORT_EGYESULET_H

#include "Vector.h"

class Sportegyesulet
{
private:
    Vector csapatok;

public:
    void ujfoci( Csapat& csapat)
    {
        csapatok.hozzaad(&csapat);
    }
    void ujkosar( Csapat& csapat)
    {
        csapatok.hozzaad(&csapat);
    }
    void ujkezi( Csapat& csapat)
    {
        csapatok.hozzaad(&csapat);
    }

    void torolcsapat(const char* nev)
    {
        csapatok.egyettorol(nev);
    }

    void csapatokkiir() const
    {

            csapatok.kiir();
    }

    Csapat* csapatkeres(const char* nev)
    {
        return csapatok.keres(nev);
    }

    ~Sportegyesulet()
    {
        csapatok.mindentorol();
    }
};

#endif // SPORT_EGYESULET_H
