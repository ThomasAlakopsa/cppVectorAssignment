#ifndef MATRIXMATH_H
#define MATRIXMATH_H

#include "RowVector.h"
#include "ColVector.h"

class MatrixMath
{
    public:
        RowVector* add2RowVectors(RowVector *rvec1, RowVector *rvec2);
        ColVector* add2ColVectors(ColVector *cvec1, ColVector *cvec2);
        Matrix* add2Matrixes( Matrix *matrix1, Matrix *matrix2);

        RowVector* sub2RowVectors(RowVector *rvec1, RowVector *rvec2);
        ColVector* sub2ColVectors(ColVector *cvec1, ColVector *cvec2);
        Matrix* sub2Matrixes( Matrix *matrix1, Matrix *matrix2);

        RowVector* multiplyRowVector(RowVector *rvec, double multiplier);
        ColVector* multiplyColVector(ColVector *cvev, double multiplier);
        Matrix* multiplyMatrix(Matrix *matrix, double multiplier);
    
    protected:
};

#endif