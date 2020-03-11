#ifndef COLVECTOR_H
#define COLVECTOR_H

#include <iostream>
#include "Matrix.h"

using namespace std;

class ColVector: public Matrix
{
    public:
        ColVector(int numOfColumns);
};

#endif