#include "LIFO.h"

LIFO::LIFO()
{
    //ctor
}

LIFO::~LIFO()
{
    //dtor
}
void Lifo::operator >(int&i){
    i=b[b.size()];
    b.pop_back();
}
