#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "Foci.h"
#include "Kosar.h"
#include "Kezi.h"
#include "gtest_lite.h"
#include "Vector.h"
#include "memtrace.h"
#include "Csapat.h"
#include "sportegyesulet.h"
#include <iostream>

class menu
{
private:
     Sportegyesulet v;
public:
    void menukiir();

    void csapattipus();
    int szambeolvas();

    void focihozzaad();
    void kosarhozzaad();
    void kezihozzaad();
    void csapathozzaad();
    void focimod();
    void kosarmod();
    void kezimod();
    void csapatmod();
    void csapattorol();
    void csapatkiir()const;
    int menumegy();


};








#endif // MENU_H_INCLUDED
