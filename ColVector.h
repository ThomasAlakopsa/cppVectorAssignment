#ifndef COLVECTOR_H
#define COLVECTOR_H

#include <iostream>
#include "Matrix.h"

using namespace std;

class ColVector : public Matrix
{

public:
    ColVector(int numOfRows);
    ColVector operator + (ColVector const obj);
    ColVector operator - (ColVector const obj);
    ColVector operator * (double const num);
};

#endif