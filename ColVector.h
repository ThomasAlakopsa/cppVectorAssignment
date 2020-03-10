#include <iostream>
#include "Matrix.h"

using namespace std;

class ColVector: public Matrix
{
    public:
        ColVector(int numOfColumns);
};