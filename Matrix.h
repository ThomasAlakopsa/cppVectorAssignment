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
       
        Matrix(int numOfRows, int numOfCols); //create matrix of x . y size

        Matrix operator + (Matrix const obj);
        Matrix operator - (Matrix const obj);
        Matrix operator * (double const multiplier);

        void add(int row, int col, double num);//add data on specific position
        
        void resize(); 
        void checkSize(); 
        void print(); 
        void populate(); // fill matrix with data

        int getNumOfRows(); //getter
        int getNumOfColumns(); //getter
     

        

};

#endif