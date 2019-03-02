#include "masina.h"
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
masina::masina()
{

}
masina::masina(ifstream f)
{
    string a,b,c;
    int d;
    f>>a;
    nume=a;
    f>>b;
    tip=b;
    f>>c;
    culoare=c;
    f>>d;
    km=d;
}

masina::~masina()
{
    //dtor
}
masina::masina(string a,string b,string c,int d)
{
  nume=a;
  tip=b;
  culoare=c;
  km=d;
}
void masina::afisare()
{
cout<<"Numele masinii este: ";
    cout<<nume<<endl;
    cout<<"Tipul: ";
    cout<<tip;
    cout<<"; Culoarea: ";
    cout<<culoare;
    cout<<"; Numar de km: ";
    cout<<km<<"km";
}
istream& operator >>(istream &in,masina &a)
{
    cout<<"Numele masini: ";
    in>>a.nume;
    cout<<"Tipul: ";
    in>>a.tip;
    cout<<"Culoare: ";
    in>>a.culoare;
    cout<<"Numar de km: ";
    in>>a.km;
    return in;
}
ostream& operator <<(ostream & out,masina a)
{
    cout<<"Numele masinii este: ";
    out<<a.nume;
    cout<<"Tipul: ";
    out<<a.tip;
    cout<<"Culoarea: ";
    out<<a.culoare;
    cout<<"Numar de km: ";
    out<<a.km;
    return out;

}
masina & masina::operator=(masina &a)
{
    this->nume=a.nume;
    tip=a.tip;
    culoare=a.culoare;
    km=a.km;
    return *this;
}
