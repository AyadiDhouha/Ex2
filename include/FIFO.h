#ifndef FIFO_H
#define FIFO_H

#include <BaseListe.h>


class FIFO : public BaseListe
{
    public:
        FIFO();
        void operator>(int);
        virtual ~FIFO();

    protected:

    private:
};

#endif // FIFO_H
