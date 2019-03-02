#include "coupe.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"

using namespace std;
coupe::coupe()
{
    //ctor
}

coupe::~coupe()
{
    //dtor
}
coupe::coupe(int a,int b,int c,string d,string e,string f,int g):masina(d,e,f,g)
{

    nr_usi=a;
    capacitate=b;
    cp=c;
}
coupe::coupe(int a,int b,int c,masina d)
{

    nr_usi=a;
    capacitate=b;
    cp=c;
    m=d;
}
void coupe::afisare()
{
   m.afisare();
    cout<<"; Numar usi: ";
    cout<<nr_usi;
    cout<<"; Capacitate: ";
    cout<<capacitate<<"m^3";
    cout<<"; Cai putere: ";
    cout<<cp<<"cp";
}
coupe &coupe::operator=(coupe& a)
{
    nr_usi=a.nr_usi;
    capacitate=a.capacitate;
    cp=a.cp;
    m=a.m;
    return *this;
}
