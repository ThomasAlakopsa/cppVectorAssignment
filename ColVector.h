#ifndef COLVECTOR_H 
#define COLVECTOR_H

#include <iostream>
#include "Matrix.h"

using namespace std;

class RowVector; // so transpose knows what RowVector is

class ColVector : public Matrix
{
    public:
        ColVector(int numOfRows);
        ColVector operator + (ColVector const obj);
        ColVector operator - (ColVector const obj);
        ColVector operator * (double const num);
        double dotProduct(ColVector const obj);
        ColVector crossProduct(ColVector const obj);
        RowVector transpose();
    };

#endif