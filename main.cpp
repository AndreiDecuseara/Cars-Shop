//#include <iostream>
//#include <string.h>
//#include <fstream>
#include "coupe.h"
#include "masina.h"
#include <conio.h>
//#include <stdio.h>
//#include <stdlib.h>
#include "hot_hetch.h"
#include "supersport.h"
#include "expozitie.h"
using namespace std;


masina* citire_masina(int &n)
{
    ifstream f("masini.in");
    masina*M;
     f>>n;
  M=new masina[n];
    string a,b,c;
    int d;
    for(int i=0;i<n;i++)
    {
      f>>a;
      f>>b;
      f>>c;
      f>>d;
    masina m(a,b,c,d);
    M[i]=m;
    }
    f.close();
    return M;
}
void afisare_masina(masina *M,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Masina numarul "<<i+1<<": "<<endl;
        M[i].afisare();
        cout<<endl;
    }
}
void afisare_coupe(coupe *C,int ci)
{
    for(int i=0;i<=ci;i++)
    {
        cout<<"Masina coupe numarul "<<i+1<<": "<<endl;
        C[i].afisare();
        cout<<endl;
    }
}
void afisare_hot_hetch(hot_hetch *H,int hn)
{
    for(int i=0;i<=hn;i++)
    {
        cout<<"Masina hot_hetch numarul "<<i+1<<": "<<endl;
        H[i].afisare_hot();
        cout<<endl;
    }
}
void afisare_supersport(supersport *S,int si)
{
    for(int i=0;i<=si;i++)
    {
        cout<<"Masina supersport numarul "<<i+1<<": "<<endl;
        S[i].afisare();
        cout<<endl;
    }
}
int main()
{

    ifstream g("masini_coupe.in");
    ifstream h("masini_hetch,in");
    ifstream s("supersport.in");
    int cn,hn,sn;
    g>>cn; //nr coupe
    h>>hn; //nr hot_hetch
    s>>sn; //nr supersport
    int n,ci=-1,hi=-1,si=-1;
  masina *M=citire_masina(n);
  coupe*C=new coupe[n];
  hot_hetch*H=new hot_hetch[n];
  supersport *S=new supersport[n];
for(int i=0;i<n;i++)
{
  try                           //Exceptia trateaza cazul in care tipul masinii nu este de gasit
   {
       if(M[i].get_tip()!="Coupe" && M[i].get_tip()!="Hot_hetch" && M[i].get_tip()!="Supersport")
          {throw M[i].get_tip();}



   }
   catch(string x)
    {
     cout<<"Eroare la masina numarul "<<i+1<<endl;
     cout<<"Acest tip nu exista sau nu este disponibil. Va rugam sa mai verificati inca o data. Multumim!";
     cout<<endl;
    }
        if(M[i].get_tip()=="Coupe")
          {    ci++;                            //Exceptia trateaza cazul in care masinile coupe sunt mai multe fata de datele din fisierul de intrare

                   int a,b,c;
                   g>>a>>b>>c;
                   coupe d(a,b,c,M[i]);
                   C[ci]=d;


           }
           if(M[i].get_tip()=="Hot_hetch")
           {
               hi++;
               string a;
               int b,c;
               h>>a>>b>>c;
               hot_hetch d(a,b,c,M[i]);
               H[hi]=d;

           }
           if(M[i].get_tip()=="Supersport")
          {    si++;                            //Exceptia trateaza cazul in care masinile coupe sunt mai multe fata de datele din fisierul de intrare

                   int a,b,c;
                   s>>a>>b>>c;
                   supersport d(a,b,c,M[i]);
                   S[si]=d;


           }

}
expozitie a(S);
//MENIU
int x;
cout<<"Bine ati venit!"<<endl;
x=1;
while(x)
{
    cout<<endl;
   cout<<"MENIU:"<<endl;
   cout<<"Press 1 for to show the all cars in the stock."<<endl;
   cout<<"Press 2 for to show the coupe cars."<<endl;
   cout<<"Press 3 for to show the hot_hetch cars."<<endl;
   cout<<"Press 4 for to show the supersport cars."<<endl;
   cout<<"Press 5 to sell a car."<<endl;
   cout<<"Press 6 for to show the sell cars."<<endl;
   cout<<"Press 7 to show buget"<<endl;
   cout<<"Press 0 for end the program"<<endl;
   cout<<"Comanda: ";
   cin>>x;
   if(x==0){cout<<endl<<"Va multumim!"<<endl;return 0;}
   if(x==1)
   {
       afisare_coupe(C,ci);
       afisare_hot_hetch(H,hi);
       afisare_supersport(S,si);
   }
   if(x==2)
   afisare_coupe(C,ci),cout<<endl;
   if(x==3)
   afisare_hot_hetch(H,hi),cout<<endl;
   if(x==4)
   afisare_supersport(S,si),cout<<endl;
   if(x==5)
   {
       int y;
       cout<<"Introduceti numarul masinii ce doriti sa o vindeti: ";
       cin>>y;
       try
       {
         if(y>sn || y<=0) throw sn;
         cout<<"Masina selectata este ";
       cout<<S[y-1].gets_nume()<<endl;
    a-=S[y-1];
    cout<<"Bugetul actualizat este: "<<a.gets_buget()<<"euro"<<endl;
       }
       catch(int sn)
       {
           cout<<"Eroare! Masina nu a fost gasita!"<<endl;
       }

   }
   if(x==6)
   a.afisare();
   if(x==7)
   {
       cout<<"Buget: "<<a.gets_buget()<<"euro"<<endl;
   }


}

g.close();
h.close();
s.close();
delete []M;
delete []S;
delete []H;
delete []C;


    return 0;
}
