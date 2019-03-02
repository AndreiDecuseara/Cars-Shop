#ifndef SUPERSPORT_H
#define SUPERSPORT_H
#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"

using namespace std;

class supersport:public masina
{
    int viteza;
    int capacitate;
    int cp;
    masina m;
    public:
        supersport();
        ~supersport();
        supersport(int a, int b, int c,masina d);
        void afisare();
        supersport& operator =(supersport &a);
        string gets_nume(){return m.nume;}

};

#endif // SUPERSPORT_H
