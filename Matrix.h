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

       
        
    public:

        Matrix(int numOfRows, int numOfCols);
        void resize();
        void checkSize();
        void print2DVec();
        void populate();
        int getNumOfRows();
        int getNumOfColumns();

        

};

#endif