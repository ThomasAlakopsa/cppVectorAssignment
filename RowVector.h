#ifndef ROWVECTOR_H
#define ROWVECTOR_H


#include <iostream>
#include "Matrix.h"

using namespace std;

class RowVector: public Matrix
{
    public:
        RowVector(int noOfColumns);
};

#endif