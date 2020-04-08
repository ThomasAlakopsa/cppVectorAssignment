#ifndef ROWVECTOR_H
#define ROWVECTOR_H

#include <iostream>
#include "Matrix.h"

using namespace std;

class ColVector; // so transpose function knows what Colvector is

class RowVector: public Matrix
{
    public:
        RowVector(int numOfColumns); // construct rowVector of N number of collumns and 1 row

        RowVector operator + (RowVector const obj); // add two RowVectors
        RowVector operator - (RowVector const obj); // subtract two RowVectors
        RowVector operator * (double const multiplier); // multiply RowVector with a double

        double dotProduct(RowVector const obj); // return dot product of a RowVector
        RowVector crossProduct(RowVector const obj);    // return CrosProduct of a RowVector
        ColVector transpose();  // Transpose a RowVector, This always results in a CollumnVector
        
};

#endif