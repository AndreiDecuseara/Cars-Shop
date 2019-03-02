#ifndef EXPOZITIE_H
#define EXPOZITIE_H
#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"
#include "coupe.h"
#include "hot_hetch.h"
#include "supersport.h"

using namespace std;
//template <class T,class P>
class expozitie
{
    int nr_masini,nr_masini_sport,nr_masini_vandute;
    int buget;
      supersport*SS;
      supersport*SV;

    public:
    expozitie();
        expozitie(supersport *a);
        ~expozitie();
        void afisare();
        expozitie &operator -=(supersport & a)
        {
             int x;
    this->nr_masini_vandute++;
    this->nr_masini_sport--;
    SV[nr_masini_vandute]=a;
    cout<<"Introduceti pretul cu care se va vinde masina: ";
    cin>>x;
    buget=buget+x;
    return *this;
        }
        int gets_buget(){return buget;}

};

#endif // EXPOZITIE_H
