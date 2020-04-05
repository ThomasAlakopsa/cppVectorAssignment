#ifndef ROWVECTOR_H
#define ROWVECTOR_H


#include <iostream>
#include "Matrix.h"

using namespace std;

class RowVector: public Matrix
{
    public:
        RowVector(int numOfColumns);
        RowVector operator + (RowVector const obj);
        RowVector operator - (RowVector const obj);
        RowVector operator * (double const multiplier);
        double dotProduct(RowVector const obj);
        RowVector crossProduct(RowVector const obj);
        
};

#endif