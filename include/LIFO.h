#ifndef LIFO_H
#define LIFO_H

#include <BaseListe.h>


class LIFO : public BaseListe
{
    public:
        LIFO();
        void operator > (int);
        virtual ~LIFO();

    protected:

    private:
};

#endif // LIFO_H
