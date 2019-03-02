#ifndef MASINA_H
#define MASINA_H
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class masina
{
    protected:
  string nume;
  string tip;
  string culoare;
  int km;

    public:
        masina();
        masina(ifstream f);
        masina(string a,string b,string c,int d);
        ~masina();
        virtual void afisare();
        friend istream& operator >>(istream & in,masina &a);
        friend ostream&operator << (ostream& out,masina a);
        string get_tip(){return tip;}
        masina &operator =(masina & a);
        friend class supersport;



};

#endif // MASINA_H
