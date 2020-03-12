#ifndef MATRIXMATH_H
#define MATRIXMATH_H

#include "RowVector.h"
#include "ColVector.h"

class MatrixMath
{
    public:
        RowVector* add2RowVectors(RowVector *rvec1, RowVector *rvec2);
        ColVector* add2ColVectors(ColVector *cvec1, ColVector *cvec2);
    
    protected:
};

#endif