#include "Matrix.h"
#include "RowVector.h"
#include "ColVector.h"

int main()
{

    // /******************************
    //  * all the matrix calculations
    //  *****************************/

    // Matrix myMatrix = Matrix(3,3);
    // myMatrix.populate();
    // cout << "the base matrix: " << endl;
    // myMatrix.print();
    // cout << endl;

    // Matrix newMatrix = myMatrix + myMatrix;

    // cout << "the addition matrix" << endl;
    // newMatrix.print();
    // cout << endl;

    // Matrix newMatrix2 = newMatrix * 7;
    // cout << "the addition matrix * 7" << endl;
    // newMatrix2.print();
    // cout << endl;

    // Matrix newMatrix3 = myMatrix - myMatrix;
    // cout << "the base matrix - the multiplied matrix" << endl;
    // newMatrix3.print();
    // cout << endl;


    // /***************************
    //  * all the row calculations
    //  * *************************/

    // RowVector myRow = RowVector(6);
    // myRow.populate();
    // cout << "the base row" << endl;
    // myRow.print();
    // cout << endl;

    // cout << "the addition Row" << endl;
    // RowVector newRow = myRow + myRow;
    // newRow.print();
    // cout << endl;

    // cout << "the addition Row * 3" << endl;
    // RowVector newRow2 = newRow * 3;
    // newRow2.print();
    // cout << endl;

    // cout << "the base row - the addition row" << endl;
    // RowVector newRow3 = myRow - myRow;
    // newRow3.print();
    // cout << endl;

    // /****************************
    //  * all the colum calculations
    //  * **************************/

    // ColVector myCol = ColVector(6);
    // myCol.populate();
    // cout << "the base Col" << endl;
    // myCol.print();
    // cout << endl;

    // cout << "the addition Col" << endl;
    // ColVector newCol = myCol + myCol;
    // newCol.print();
    // cout << endl;

    // cout << "the addition Col * 3" << endl;
    // ColVector newCol2 = newCol * 3;
    // newCol2.print();
    // cout << endl;

    // cout << "the base Col - the addition Col" << endl;
    // ColVector newCol3 = myCol - myCol;
    // newCol3.print();
    // cout << endl;

    
    // Matrix matrixToTranspose = Matrix(4,6);
    // matrixToTranspose.populate();
    // Matrix transposedMatrix = matrixToTranspose.transpose();
    // transposedMatrix.print();

    RowVector RVtoTranspose = RowVector(5);
    RVtoTranspose.populate();
    RVtoTranspose.print();
    ColVector transposedRow = RVtoTranspose.transpose();
    transposedRow.print();

    return 0;
}


// how to remove pointers