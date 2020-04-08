#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <list>
#include <vector>

using namespace std; 

class Matrix
{
    protected:

        vector<vector<double> > a2DVector;
        int numberOfRows = 0;
        int numberOfColumns = 0;
       
    friend class MatrixMath;

    public:

        Matrix(); // default constructor   
        Matrix(int numOfRows, int numOfCols); //create matrix of x . y size
    
        Matrix operator + (Matrix const obj);  // add two matrixes
        Matrix operator - (Matrix const obj);  // subtract two matrixes
        Matrix operator * (double const multiplier);    // muliply matrixes with a double

        Matrix transpose(); // transpose current matrix
        Matrix multiply(Matrix obj);  // multiply two matrixes
        
        void swapRowsInMatrix(int r1, int r2);
        void orderForForwardElimination(int col);
        void forwardElimination();

        void add(int row, int col, double num); //add data on specific position
        
        void resize(); // resize the 2Dvector
        void checkSize(); // check size 
        void print(); // print the matrix in a clear way
        void populate(); // fill matrix with test data, this is always incrementing

        int getNumOfRows(); //getter
        int getNumOfColumns(); //getter
     

        

};

#endif