#ifndef HOT_HETCH_H
#define HOT_HETCH_H
#include <iostream>
#include <string.h>
#include <fstream>
#include "masina.h"

using namespace std;

class hot_hetch:public masina
{
    string model_baza;
    int capacitate;
    int cp;
    masina m;
    public:
        hot_hetch();
        ~hot_hetch();
        hot_hetch(string a, int b, int c,string d,string e,string f,int g);
        hot_hetch(string a, int b, int c,masina d);
        hot_hetch & operator =(hot_hetch & a);
        void afisare_hot();

};

#endif // HOT_HETCH_H
