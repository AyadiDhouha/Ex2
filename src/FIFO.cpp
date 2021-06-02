#include "FIFO.h"

FIFO::FIFO()
{
    //ctor
}

FIFO::~FIFO()
{
    //dtor
}
void FIFO::operator> (int &i){
    i=b[0];
    b.pop_front();
}
