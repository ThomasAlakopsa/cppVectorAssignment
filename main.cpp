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

    /***************
     * Transpose
     * *************/
    
    // Matrix matrixToTranspose = Matrix(4,6);
    // matrixToTranspose.populate();
    // Matrix transposedMatrix = matrixToTranspose.transpose();
    // transposedMatrix.print();

    // ColVector Tcv = ColVector(4);
    // Tcv.populate();
    // RowVector result = Tcv.transpose();
    // result.print();

    // RowVector Trv = RowVector(4);
    // Trv.populate();
    // ColVector result2 = Trv.transpose();
    // result2.print();


    /***************
     * dot product
     * *************/

    // RowVector DPv1 = RowVector(4);
    // DPv1.populate();
    // double dotproduct = DPv1.dotProduct(DPv1);
    // cout << dotproduct << endl;

    // ColVector DPv2 = ColVector(4);
    // DPv2.populate();
    // double dotproduct2 = DPv2.dotProduct(DPv2);
    // cout << dotproduct2 << endl;

    /*********************
    * cross product
    * ********************/

    // RowVector CPvector1 = RowVector(3);
    // CPvector1.add(0,0,3);
    // CPvector1.add(0,1,5);
    // CPvector1.add(0,2,-7);
    // CPvector1.print();

    // RowVector CPvector2 = RowVector(3);
    // CPvector2.add(0,0,2);
    // CPvector2.add(0,1,-6);
    // CPvector2.add(0,2,4);
    // CPvector2.print();

    // RowVector crossProduct1 = CPvector1.crossProduct(CPvector2);
    // crossProduct1.print();

    // ColVector CPvector3 = ColVector(3);
    // CPvector3.add(0,0,3);
    // CPvector3.add(1,0,5);
    // CPvector3.add(2,0,-7);
    // CPvector3.print();
    // cout << endl;

    // ColVector CPvector4 = ColVector(3);
    // CPvector4.add(0,0,2);
    // CPvector4.add(1,0,-6);
    // CPvector4.add(2,0,4);
    // CPvector4.print();
    // cout << endl;

    // ColVector crossProduct2 = CPvector3.crossProduct(CPvector4);
    // crossProduct2.print();

    /*************************
     * Matrix Multiplication
     * **********************/

    Matrix mm1 = Matrix(2,3);
    mm1.populate();
    Matrix mm2 = Matrix(3,2);
    mm2.populate();

    Matrix mmResult = mm1.multiply(mm2);
    mmResult.print();

    

    return 0;
}


// how to remove pointers