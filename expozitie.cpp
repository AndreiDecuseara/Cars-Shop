#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"
#include "coupe.h"
#include "hot_hetch.h"
#include "supersport.h"
#include"expozitie.h"

using namespace std;


//template <class T,class P>
expozitie::expozitie(supersport *a)
{
    ifstream f("masini.in");
    f>>nr_masini;
    f.close();
    ifstream g("supersport.in");
    g>>nr_masini_sport;
    nr_masini_vandute=0;
    g.close();
    SS=new supersport[nr_masini_sport];
    SV=new supersport[nr_masini_sport];
    for(int i=0;i<nr_masini_sport;i++)
    {
        SS[i]=a[i];
    }
    buget=0;

}
//template <class T,class P>
void expozitie::afisare()
{
    cout<<"Numar masini: "<<nr_masini<<endl;
    cout<<"Numar masini sport: "<<nr_masini_sport<<endl;
    cout<<"Numar masini sport vandute: "<<nr_masini_vandute<<endl;
    cout<<"Masini sport vandute: "<<endl;
    for(int i=1;i<=nr_masini_vandute;i++)
    {cout<<"Masina numarul "<<i<<" :"<<endl;SV[i].afisare();cout<<endl;}

}
//template <class T,class P>
expozitie::~expozitie()
{

}

/*template <class T,int P>
expozitie& expozitie<T,P> :: operator -=(supersport &a)
{
    int x;
    this->nr_masini_vandute++;
    this->nr_masini_sport--;
    SV[nr_masini_vandute]=a;
    cout<<"Introduceti pretul cu care se va vinde masina: ";
    cin>>x;
    buget=buget+x;
    return *this;

}*/


