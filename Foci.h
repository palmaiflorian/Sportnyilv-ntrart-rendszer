#ifndef FOCI_H
#define FOCI_H

#include "Csapat.h"

class Foci : public Csapat {
public:

    Foci(char*,int,int);
    void setedzo(int );
    int getedzo()const;
    virtual ~Foci(){}
    void kiir() const override;


private:
    int edzoszam;

};

#endif // FOCI_H
