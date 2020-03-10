#ifndef MAXTRIX_H
#define MAXTRIX_H

#include <iostream>
#include <list>
#include <vector>

using namespace std; 

class Matrix
{
    protected:

        vector<vector<double> > a2DVector;
        int numberOfRows;
        int numberOfColumns;

        void resize();
        
    public:
        Matrix(int numOfRows, int numOfCols);
        
        void checkSize();
        void print2DVec();
        void populate();
        

};

#endif