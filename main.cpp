#include "Matrix.h"
#include "RowVector.h"
#include "ColVector.h"
#include "MatrixMath.h"

int main()
{
    //Matrix *myMatrix = new Matrix(3,3);
    //myMatrix->checkSize();
    //myMatrix->populate();
    //myMatrix->print2DVec();



    MatrixMath math = MatrixMath(); //create math object
    RowVector *myRow = new RowVector(6); //create pointer to new rowvector
    myRow->populate(); // fill rowvector with data
    myRow->print(); // display the data

    
    // create new pointer to a new row that contains the addition of myRow + myRow
    RowVector *newRow = math.add2RowVectors(myRow, myRow);
    newRow->print(); // display newRow

    ColVector *myCol = new ColVector(5); //create pointer to new colvector
    myCol->populate(); // fill columVec with data
    myCol->print(); // print it


    // create new pointer to a new row that contains the addition of myRow + myRow
    ColVector *newCol = math.add2ColVectors(myCol, myCol);
    newCol->print(); // print it

    return 0;
}


// how to remove pointers