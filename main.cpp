#include "Matrix.h"
#include "RowVector.h"
#include "ColVector.h"
#include "MatrixMath.h"

int main()
{
    Matrix *myMatrix = new Matrix(3,3);
    myMatrix->checkSize();
    myMatrix->populate();
    myMatrix->print2DVec();

    cout << endl;

    //RowVector *myRow = new RowVector(3);
    //myRow->populate();
    //myRow->print2DVec();

    //cout << endl;

  /*  ColVector *myCol = new ColVector(3);
    myCol->populate();
    myCol->print2DVec();*/

    //MatrixMath foo = MatrixMath();
    //RowVector *x = foo.add2RowVectors(myRow, myRow);
    //x->print2DVec();

    return 0;
}


// how to remove pointers