#include "BaseListe.h"

BaseListe::BaseListe()
{
    //ctor
}

BaseListe::~BaseListe()
{
    //dtor
}
BaseListe &BaseListe::operator<(int &i){
b.push_back(i);
}
ostream &operator << (ostream &o,BaseListe&l){
   for (int i=0;i<l.b.size();i++) {
    o<<l.b[i]<<endl;
   }
   return o;
}
