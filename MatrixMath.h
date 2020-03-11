#ifndef MATRIXMATH_H
#define MATRIXMATH_H

#include "RowVector.h"

class MatrixMath
{
    public:
        RowVector* add2RowVectors(RowVector *rvec1, RowVector *rvec2);

    protected:
        
        int rowSizeVec1;
        int rowSizeVec2;

};

#endif