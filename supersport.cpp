#include "supersport.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"

using namespace std;
supersport::supersport()
{
    //ctor
}

supersport::~supersport()
{
    //dtor
}
supersport::supersport(int a,int b,int c,masina d)
{

    viteza=a;
    capacitate=b;
    cp=c;
    m=d;
}
void supersport::afisare()
{
   m.afisare();
    cout<<"; Viteza maxima: ";
    cout<<viteza<<"km/h";
    cout<<"; Capacitate: ";
    cout<<capacitate<<"m^3";
    cout<<"; Cai putere: ";
    cout<<cp<<"cp";
}
supersport &supersport::operator=(supersport& a)
{
    viteza=a.viteza;
    capacitate=a.capacitate;
    cp=a.cp;
    m=a.m;
    return *this;
}
