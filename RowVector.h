#ifndef ROWVECTOR_H
#define ROWVECTOR_H


#include <iostream>
#include "Matrix.h"
#include "RowVector.h"
#include "ColVector.h"

using namespace std;

class RowVector: public Matrix
{
    public:
        RowVector(int numOfColumns);
        RowVector operator + (RowVector const obj);
        RowVector operator - (RowVector const obj);
        RowVector operator * (double const multiplier);
        ColVector transpose();
};

#endif