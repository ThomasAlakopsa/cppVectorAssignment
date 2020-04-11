#include "Matrix.h"
#include "RowVector.h"
#include "ColVector.h"

int main()
{

    /******************************
     * all the matrix calculations
     *****************************/

    Matrix baseMatrix = Matrix(3,3);
    baseMatrix.populate();
    cout << "the base matrix: " << endl;
    baseMatrix.print();
    cout << endl;

    Matrix addMatrix = baseMatrix + baseMatrix;

    cout << "the addition matrix" << endl;
    addMatrix.print();
    cout << endl;

    Matrix multplyMatrix = addMatrix * 7;
    cout << "the addition matrix * 7" << endl;
    multplyMatrix.print();
    cout << endl;

    Matrix subtractMatrix = multplyMatrix - baseMatrix;
    cout << "the multiplied matrix - subtractMatrix" << endl;
    subtractMatrix.print();
    cout << endl;


    /***************************
     * all the row calculations
     * *************************/

    RowVector baseRow = RowVector(6);
    baseRow.populate();
    cout << "the base row" << endl;
    baseRow.print();
    cout << endl;

    cout << "the baseRow + the baseRow" << endl;
    RowVector addRow = baseRow + baseRow;
    addRow.print();
    cout << endl;

    cout << "the baseRow * 3" << endl;
    RowVector multiplyRow = baseRow * 3;
    multiplyRow.print();
    cout << endl;

    cout << "the multiplied row - the base row" << endl;
    RowVector subtractRow = multiplyRow - baseRow;
    subtractRow.print();
    cout << endl;

    /****************************
     * all the colum calculations
     * **************************/

    ColVector baseCol = ColVector(6);
    baseCol.populate();
    cout << "the base Col" << endl;
    baseCol.print();
    cout << endl;

    cout << "the baseCol + the baseCol" << endl;
    ColVector addCol = baseCol + baseCol;
    addCol.print();
    cout << endl;

    cout << "the addition Col * 3" << endl;
    ColVector multiplyCol = addCol * 3;
    multiplyCol.print();
    cout << endl;

    cout << "the multiplyCol - the baseCol" << endl;
    ColVector subtractCol = multiplyCol - baseCol;
    subtractCol.print();
    cout << endl;

    /***************
     * Transpose
     * *************/
    
    Matrix matrixToTranspose = Matrix(4,6);
    matrixToTranspose.populate();
    Matrix transposedMatrix = matrixToTranspose.transpose();
    transposedMatrix.print();

    ColVector Tcv = ColVector(4);
    Tcv.populate();
    RowVector transposedCV = Tcv.transpose();
    transposedCV.print();

    RowVector Trv = RowVector(4);
    Trv.populate();
    ColVector TransposedRV = Trv.transpose();
    TransposedRV.print();


    /***************
     * dot product
     * *************/

    RowVector DPv1 = RowVector(4);
    DPv1.populate();
    double dotproduct = DPv1.dotProduct(DPv1);
    cout << dotproduct << endl;

    ColVector DPv2 = ColVector(4);
    DPv2.populate();
    double dotproduct2 = DPv2.dotProduct(DPv2);
    cout << dotproduct2 << endl;

    /*********************
    * cross product
    * ********************/

    RowVector CPvector1 = RowVector(3);
    CPvector1.add(0,0,3);
    CPvector1.add(0,1,5);
    CPvector1.add(0,2,-7);
    CPvector1.print();

    RowVector CPvector2 = RowVector(3);
    CPvector2.add(0,0,2);
    CPvector2.add(0,1,-6);
    CPvector2.add(0,2,4);
    CPvector2.print();

    RowVector crossProduct1 = CPvector1.crossProduct(CPvector2);
    crossProduct1.print();
    cout << endl;

    ColVector CPvector3 = ColVector(3);
    CPvector3.add(0,0,3);
    CPvector3.add(1,0,5);
    CPvector3.add(2,0,-7);
    CPvector3.print();
    cout << endl;

    ColVector CPvector4 = ColVector(3);
    CPvector4.add(0,0,2);
    CPvector4.add(1,0,-6);
    CPvector4.add(2,0,4);
    CPvector4.print();
    cout << endl;

    ColVector crossProduct2 = CPvector3.crossProduct(CPvector4);
    crossProduct2.print();
    cout << endl;

    /*************************
     * Matrix Multiplication
     * **********************/

    Matrix mm1 = Matrix(2,3);
    mm1.populate();
    Matrix mm2 = Matrix(3,2);
    mm2.populate();

    Matrix mmResult = mm1.multiply(mm2);
    mmResult.print();
    cout << endl;

    /*************************
     * Gaussian elimination
     * ***********************/

    Matrix gaus = Matrix(3,3+1);
    gaus.add(0,0,25); gaus.add(0,1,5); gaus.add(0,2,1); gaus.add(0,3,106.8);
    gaus.add(1,0,64); gaus.add(1,1,8); gaus.add(1,2,1); gaus.add(1,3,177.2);
    gaus.add(2,0,144); gaus.add(2,1,12); gaus.add(2,2,1); gaus.add(2,3,279.2);

    cout << "the beginning matrix: " << endl;
    gaus.print();
    cout << endl;

    //gaus.orderForForwardElimination(0);
    gaus.forwardElimination();

    cout << "Matrix after forward elimination: " << endl;
    gaus.print();
    cout << endl;

    ColVector gausResult = gaus.backSubstitution();

    cout << "result values: " << endl;
    gausResult.print();
    

    
    return 0;
}


// how to remove pointers