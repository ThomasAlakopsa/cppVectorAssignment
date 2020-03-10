#include <iostream>
#include "Matrix.h"

using namespace std;

class RowVector: public Matrix
{
    public:
        RowVector(int noOfColumns);
};