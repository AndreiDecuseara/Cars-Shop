#ifndef COUPE_H
#define COUPE_H
#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"

using namespace std;

class coupe:public masina
{
    int nr_usi;
    int capacitate;
    int cp;
    masina m;
    public:
        coupe();
        coupe(int a, int b, int c,string d,string e,string f,int g);
        coupe(int a, int b, int c,masina d);
        ~coupe();
        void afisare();
        coupe& operator =(coupe &a);

};

#endif // COUPE_H
