#ifndef MAXTRIX_H
#define MAXTRIX_H

#include <iostream>
#include <list>
#include <vector>

using namespace std; 

class Matrix
{
    protected:
        int numberOfRows;
        int numberOfColumns;
        void resize();
        
    public:
        Matrix(int numOfRows, int numOfCols);
        
        vector<vector<double> > a2DVector;

        void checkSize();
        void print2DVec();
        void populate();
        vector<vector<double> > get2DVector();
        

};

#endif