#ifndef VECTOR_H
#define VECTOR_H
#include <cstring>
#include "Csapat.h"
class Vector
{
    private:
        int db;
        Csapat** tomb;
    public:
        Vector()
        {
            tomb=new Csapat*[1];
            db=0;
        };
        virtual ~Vector()
        {
            mindentorol();
            delete[] tomb;
        };
        int getdb()const
        {
            cout<<"a csapatok darabszama: ";
            return db;
        };


        void hozzaad( Csapat*  uj)
        {
            Csapat** seged=new Csapat*[db+1];
            for(int i=0;i<db;i++)
            {
                seged[i]=tomb[i];
            }
            seged[db++]=uj;
            delete[] tomb;
            tomb=seged;
        };


        void egyettorol(const char* nev)
        {
            bool van=false;

            for(int i=0;i<db;i++)
            {
                if(strcmp(nev,tomb[i]->getnev())==0)
                {
                    delete tomb[i];
                    van=true;
                    Csapat** seged=new Csapat*[db-1];
                    for(int a=0;a<i;a++)
                    {
                        seged[a]=tomb[a];
                    }
                    for(int a=i;a<db-1;a++)
                    {
                        seged[a]=tomb[a+1];
                    }

                    delete[] tomb;

                    tomb=seged;
                    db-=1;

                }
            }

            if(!van)
            {
                cout<<"Nincs ilyen csapat"<<endl;
            }


        }
        void mindentorol()
        {
            for(int i=0;i<db;i++)
            {
                delete tomb[i];
            }
            db=0;
        }

        void kiir()const
        {
            if(db==0)
            {
                cout<<"Nincsen egyetlen csapat sem"<<endl;
            }
            else
            {
                for(int i=0;i<db;i++)
                {
                    tomb[i]->kiir();
                }
            }
        }
        Csapat* keres(const char* nev)
        {
            for(int i=0;i<db;i++)
            {
                if(strcmp(nev,tomb[i]->getnev())==0)
                {
                    return tomb[i];
                }
            }
            return NULL;
        }


};

#endif // VECTOR_H
