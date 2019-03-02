#include "hot_hetch.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"

using namespace std;
hot_hetch::hot_hetch()
{
    //ctor
}

hot_hetch::~hot_hetch()
{
    //dtor
}
hot_hetch::hot_hetch(string a,int b,int c,string d,string e,string f,int g):masina(d,e,f,g)
{

    model_baza=a;
    capacitate=b;
    cp=c;
}
hot_hetch::hot_hetch(string a,int b,int c,masina d)
{

    model_baza=a;
    capacitate=b;
    cp=c;
    m=d;
}
hot_hetch & hot_hetch :: operator=(hot_hetch &a)
{
    m=a.m;
    model_baza=a.model_baza;
    capacitate=a.capacitate;
    cp=a.cp;
    return *this;
}
void hot_hetch::afisare_hot()
{
   m.afisare();
    cout<<"; Model de baza: ";
    cout<<model_baza;
    cout<<"; Capacitate: ";
    cout<<capacitate<<"m^3";
    cout<<"; Cai putere: ";
    cout<<cp<<"cp";
}
