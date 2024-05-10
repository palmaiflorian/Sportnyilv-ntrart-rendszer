#include "menu.h"
void menu::menukiir()
{
    cout<<"\n\n\n";
    cout<<"0.Kilepes"<<endl;
    cout<<"1.Csapat letrehozasa"<<endl;
    cout<<"2.Csapat modositasa"<<endl;
    cout<<"3.Csapat torlese"<<endl;
    cout<<"4.Csapatok kiirasa"<<endl;


}
void menu::csapattipus()
{

    cout<<"\n\n\n";
    cout<<"Add meg a csapat tipusat: "<<endl;
    cout<<"0.Vissza"<<endl;
    cout<<"1.Foci"<<endl;
    cout<<"2.Kosar"<<endl;
    cout<<"3.Kezi"<<endl;

}
int menu::szambeolvas()
{
    int szam;
    while (!(cin >> szam))
        {
            cout << "Ervenytelen muvelet, szamot adj meg" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
        return szam;
}
void menu::focihozzaad()
{
    char* nev = new char[256];
    cout << "Add meg a csapat nevet: " << endl;
    cin.ignore();
    cin.getline(nev, 255);
    nev[255]='\0';
    int letszam;
    cout << "Add meg a csapat letszamat: " << endl;
    letszam = szambeolvas();
    int edzoszam;
    cout << "Add meg a csapat edzoszamat: " << endl;
    edzoszam = szambeolvas();
    Csapat* csapat = new Foci(nev, letszam, edzoszam);
    v.ujfoci(*csapat);
    cout << "Csapat letrehozva" << endl;
}
void menu::kosarhozzaad()
{
        char* nev=new char[256];
            cout<<"Add meg a csapat nevet: "<<endl;
            cin.ignore();
            cin.getline(nev,255);
            cout<<"Add meg a csapat letszamat: "<<endl;
            int letszam;
            letszam=szambeolvas();
            int pompom;
            cout<<"Add meg a csapat pompomlanyainak szamat: "<<endl;
            pompom=szambeolvas();
            Csapat* csapat=new Kosar(nev,letszam,pompom);
            v.ujkosar(*csapat);
            cout<<"Csapat letrehozva"<<endl;

}
void menu::kezihozzaad()
{
     char* nev=new char[256];
            cout<<"Add meg a csapat nevet: "<<endl;
            cin.ignore();
            cin.getline(nev,255);
            int letszam;
            cout<<"Add meg a csapat letszamat: "<<endl;
            letszam=szambeolvas();
            int tamogatas;
            cout<<"Add meg a tamogatas erteket: "<<endl;
            tamogatas=szambeolvas();
            Csapat* csapat=new Kezi(nev,letszam,tamogatas);
            v.ujkezi(*csapat);
            cout<<"Csapat letrehozva"<<endl;

}
void menu::csapathozzaad()
{
                int csapatszam;
                csapattipus();
                csapatszam=szambeolvas();
                switch(csapatszam)
                {
                    case 0:
                    {
                        break;

                    }
                    case 1://Focicsapat letrehozasa
                    {
                        focihozzaad();
                        break;

                    }
                    case 2://kosarcsapat letrehozasa
                    {
                        kosarhozzaad();
                        break;

                    }
                    case 3://kezicsapat letrehozasa
                    {
                        kezihozzaad();
                        break;

                    }
                    default:
                        {
                           cout<<"Ervénytelen muvelet!"<<endl;
                           break;
                        }
                }
}

void menu::focimod()
{
            char* csapnev=new char[256];
            cout<<"Add meg a modositando csapat nevet: "<<endl;
            cin.ignore();
            cin.getline(csapnev,255);

        if(v.csapatkeres(csapnev)==NULL)
            {
                cout<<"Nincs ilyen csapat"<<endl;
                delete[]csapnev;
                return;
            }
        int mit;
        cout<<"Mit szeretnel modositani? "<<endl;
        cout<<"0.Kilepes"<<endl;
        cout<<"1.Nev"<<endl;
        cout<<"2.Letszam"<<endl;
        cout<<"3.Edzoszam"<<endl;
        mit=szambeolvas();
        switch(mit)
            {
                case 0:
                    {
                        break;
                    }
                            case 1://foci nev
                                {
                                    char* ujnev=new char[256];
                                    cout<<"Add meg az uj nevet: "<<endl;
                                    cin.ignore();
                                    cin.getline(ujnev,255);
                                    v.csapatkeres(csapnev)->setnev(ujnev);

                                    break;
                                }
                            case 2://foci letszam
                                {
                                    int ujszam;
                                    cout<<"Add meg az uj letszamot: "<<endl;
                                    ujszam=szambeolvas();
                                    v.csapatkeres(csapnev)->setletszam(ujszam);
                                    break;
                                }
                             case 3://foci edzo
                                {

                                    Csapat* csapat = v.csapatkeres(csapnev);
                                    Foci* foci = dynamic_cast<Foci*>(csapat);
                                    if (foci != nullptr) {
                                        int edzo;
                                        cout << "Add meg az uj edzok szamat: " << endl;
                                        while (!(cin >> edzo))
                                        edzo=szambeolvas();
                                        foci->setedzo(edzo);
                                    }
                                    else
                                        {
                                            cout << "A keresett csapat nem focicsapat!" << endl;
                                        }
                                    break;
                                }
                            }
            delete[] csapnev;


}
void menu::kosarmod()
{
                            char* csapnev=new char[256];
                            cout<<"Add meg a modositando csapat nevet: "<<endl;
                            cin.ignore();
                            cin.getline(csapnev,255);
                            if(v.csapatkeres(csapnev)==NULL)
                                {
                                    cout<<"Nincs ilyen csapat"<<endl;
                                    delete[]csapnev;
                                   return;
                                }
                            int mit;
                            cout<<"Mit szeretnel modositani? "<<endl;
                            cout<<"0.Kilepes"<<endl;
                            cout<<"1.Nev"<<endl;
                            cout<<"2.Letszam"<<endl;
                            cout<<"3.Pompomlanyok szama"<<endl;
                            mit=szambeolvas();

                            switch(mit)
                            {
                            case 0:
                                {
                                    break;
                                }
                            case 1://kosar nev
                                {
                                    char* ujnev=new char[256];
                                    cout<<"Add meg az uj nevet: "<<endl;
                                    cin.ignore();
                                    cin.getline(ujnev,255);
                                    v.csapatkeres(csapnev)->setnev(ujnev);

                                    break;
                                }
                            case 2://kosar letszam
                                {
                                    int ujszam;
                                    cout<<"Add meg az uj letszamot: "<<endl;
                                    ujszam=szambeolvas();
                                    v.csapatkeres(csapnev)->setletszam(ujszam);
                                    break;
                                }
                            case 3://kosar pompom
                                {

                                    Csapat* csapat = v.csapatkeres(csapnev);
                                    Kosar* kosar = dynamic_cast<Kosar*>(csapat);
                                    if (kosar != nullptr) {
                                        int ujpom;
                                        cout << "Add meg az uj pompomlanyok szamat: " << endl;
                                        ujpom=szambeolvas();
                                        kosar->setpompom(ujpom);
                                    }
                                    else
                                        {
                                            cout << "A keresett csapat nem kosarcsapat!" << endl;
                                        }
                                    break;
                                }

                            }
            delete[] csapnev;
}
void menu::kezimod()
{
                            char* csapnev=new char[256];
                            cout<<"Add meg a modositando csapat nevet: "<<endl;
                            cin.ignore();
                            cin.getline(csapnev,255);
                            if(v.csapatkeres(csapnev)==NULL)
                                {
                                    cout<<"Nincs ilyen csapat"<<endl;
                                    delete[]csapnev;
                                   return;
                                }
                            int mit;
                            cout<<"Mit szeretnel modositani? "<<endl;
                            cout<<"0.Kilepes"<<endl;
                            cout<<"1.Nev"<<endl;
                            cout<<"2.Letszam"<<endl;
                            cout<<"3.Tamogatas osszege "<<endl;
                            mit=szambeolvas();
                            switch(mit)
                            {
                            case 0:
                                {
                                    break;
                                }
                            case 1://kezi nev
                                {
                                    char* ujnev=new char[256];
                                    cout<<"Add meg az uj nevet: "<<endl;
                                    cin.ignore();
                                    cin.getline(ujnev,255);
                                    v.csapatkeres(csapnev)->setnev(ujnev);

                                    break;
                                }
                            case 2://kezi letszam
                                {
                                    int ujszam;
                                    cout<<"Add meg az uj letszamot: "<<endl;
                                    ujszam=szambeolvas();
                                    v.csapatkeres(csapnev)->setletszam(ujszam);
                                    break;
                                }
                            case 3://kezi tamogatas
                                {

                                    Csapat* csapat = v.csapatkeres(csapnev);
                                    Kezi* kezi = dynamic_cast<Kezi*>(csapat);
                                    if (kezi != nullptr) {
                                        int ujtam;
                                        cout << "Add meg az uj tamogatas osszeget : " << endl;
                                        ujtam=szambeolvas();
                                        kezi->settamogatas(ujtam);
                                    }
                                    else
                                        {
                                            cout << "A keresett csapat nem kezicsapat!" << endl;
                                        }
                                    break;
                                }
                            }
                delete[] csapnev;

}
void menu::csapatmod()
{
                    int csapatszam;
                    csapattipus();
                    csapatszam=szambeolvas();
                    switch(csapatszam)
                    {
                    case 0:
                        {
                            break;
                        }
                    case 1://Focicsapat modositasa
                        {
                            focimod();
                            break;
                        }
                    case 2://Kosarcsapat modositasa
                        {
                            kosarmod();
                            break;
                    case 3://Kezicsapat modositasa
                        {
                            kezimod();
                            break;
                        }
                        default:
                                {
                                    cout<<"Ervenytelen muvelet!"<<endl;
                                }
                    }

                    break;//csapat modositasanak vege
                    }
}

void menu::csapattorol()
{
                   cout<<"Add meg a torlendo csapat nevet: "<<endl;
                   char* csapnev=new char[256];
                   cin.ignore();
                   cin.getline(csapnev,255);

                   if(v.csapatkeres(csapnev)==NULL)
                        {
                            cout<<"Nincs ilyen csapat"<<endl;
                            delete[]csapnev;
                            return;
                        }
                    v.torolcsapat(csapnev);
                    delete []csapnev;
                    return;
}
void menu::csapatkiir()const
{
    v.csapatokkiir();
}
int menu::menumegy()
{
     cout << "Fitt Sportegyesulet" << endl;
    menukiir();


    bool megy=true;
    while(megy)
    {
        int szam;
        szam=szambeolvas();


        switch(szam)
        {
            case 0:
                {
                    return 0;
                }
            case 1://Csapat letrehozasa
            {
                    csapathozzaad();
                    break;
                }
            case 2:   //Csapat modositasa
                {
                    csapatmod();
                    break;
                }
            case 3://csapat torlese
                {
                   csapattorol();
                   break;

                }
            case 4://csapatok kiirasa
                {
                    csapatkiir();
                    break;
                }
            default:
                {
                    cout<<"Ervenytelen muvelet"<<endl;
                }


        }
        menukiir();
    }
    return 0;
}











