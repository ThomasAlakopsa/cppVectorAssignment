#include "Matrix.h"
#include "RowVector.h"
#include "ColVector.h"
#include "MatrixMath.h"

int main()
{

    MatrixMath math = MatrixMath(); //create math object

    /******************************
     * all the matrix calculations
     *****************************/

    Matrix *myMatrix = new Matrix(3,3);
    myMatrix->populate();
    cout << "the base matrix: " << endl;
    myMatrix->print();
    cout << endl;

    Matrix *newMatrix = math.add2Matrixes(myMatrix, myMatrix);
    cout << "the addition matrix" << endl;
    newMatrix->print();
    cout << endl;

    Matrix *newMatrix2 = math.multiplyMatrix(newMatrix, 7);
    cout << "the addition matrix * 7" << endl;
    newMatrix2->print();
    cout << endl;

    Matrix *newMatrix3 = math.sub2Matrixes(myMatrix, newMatrix2);
    cout << "the base matrix - the multiplied matrix" << endl;
    newMatrix3->print();
    cout << endl;


    /***************************
     * all the row calculations
     * *************************/

    RowVector *myRow = new RowVector(6); 
    myRow->populate();
    cout << "the base row" << endl;
    myRow->print();
    cout << endl;

    cout << "the addition Matrix" << endl;
    RowVector *newRow = math.add2RowVectors(myRow, myRow);
    newRow->print(); 
    cout << endl;

    cout << "the addition Matrix * 3" << endl;
    RowVector *newRow2 = math.multiplyRowVector(newRow, 3);
    newRow2->print();
    cout << endl;

    cout << "the base matrix - the addition matrix" << endl;
    RowVector *newRow3 = math.sub2RowVectors(myRow, newRow2);
    newRow3->print();
    cout << endl;

    /****************************
     * all the colum calculations
     * **************************/

    ColVector *myCol = new ColVector(6); 
    myCol->populate(); 
    cout << "the base Col" << endl;
    myCol->print(); 
    cout << endl;

    cout << "the addition Col" << endl;
    ColVector *newCol = math.add2ColVectors(myCol, myCol);
    newCol->print(); 
    cout << endl;

    cout << "the addition Col * 3" << endl;
    ColVector *newCol2 = math.multiplyColVector(newCol, 3);
    newCol2->print();
    cout << endl;

    cout << "the base Col - the addition Col" << endl;
    ColVector *newCol3 = math.sub2ColVectors(myCol, newCol2);
    newCol3->print();
    cout << endl;

    return 0;
}


// how to remove pointers