#ifndef BASELISTE_H
#define BASELISTE_H
#include<deque>
#include<iostream>
using namespace std;
//Template<class T>

class BaseListe
{

    public:
        //deque<T> b;
        deque<int> b;
        BaseListe();
        BaseListe operator <(int);
        friend ostream&operator << (ostream&o,BaseListe &b);
        virtual ~BaseListe();

    protected:

    private:
};

#endif // BASELISTE_H
