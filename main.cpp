#include "Matrix.h"
#include "RowVector.h"
#include "ColVector.h"
#include "Math.h"

int main()
{
    // Matrix *myMatrix = new Matrix(3,3);
    // myMatrix->checkSize();
    // myMatrix->populate();
    // myMatrix->print2DVec();

    // cout << endl;

     RowVector *myRow = new RowVector(3);
    // myRow->populate();
    // myRow->print2DVec();

    // cout << endl;

    // ColVector *myCol = new ColVector(3);
    // myCol->populate();
    // myCol->print2DVec();

    Math *myMath = new Math();
    vector<vector<double> > rvec1 = myRow->get2DVector();
    vector<vector<double> > rvec2 = myRow->get2DVector();
    cout << rvec1.size() << endl;

    myMath->add2Matrixes(rvec1, rvec2);

    return 0;
}


// how to remove pointers