#include <iostream>
#include <list>
#include <vector>
#include "Matrix.h"

using namespace std;

/*
create a matrix with a given number of rows and columns
*/
Matrix::Matrix(int numOfRows, int numOfCols)
{
    this->numberOfRows = numOfRows;
    this->numberOfColumns = numOfCols;
    this->resize();
};

/*
    resize the matrix
*/
void Matrix::resize()
{
    a2DVector.resize(numberOfRows);
    for (int i = 0; i < numberOfRows; i++)
    {
        a2DVector[i].resize(numberOfColumns);
    }
}

/*
    print the matrix in a good looking way
*/
void Matrix::print()
{
    for (int i = 0; i < numberOfRows; i++){
        if (i != 0){
            for (int j = 0; j < numberOfColumns; j++){
                if(abs(a2DVector[i][j]) > 999){
                    cout << "---";
                }else if(abs(a2DVector[i][j]) > 99){
                    cout << "--";
                }else if(abs(a2DVector[i][j]) > 9){
                    cout << "-";
                }
                cout << "----";
            }
            cout << "-" << endl;
        }
        cout << "| ";

        for (int j = 0; j < numberOfColumns; j++){
            cout << a2DVector[i][j] << " | ";
        }
        cout << endl;
    }
}

/*
    help function to check the size of the matrix
*/

void Matrix::checkSize()
{   
    cout << "columns: " << a2DVector.size() << endl;
    cout << "rows: " << a2DVector[0].size() << endl;

}

/*
    add a value in a specific location of the matrix
*/
void Matrix::add(int row, int col, double num)
{
    a2DVector[row][col] = num;
}


/*
    fill the matrix with some data
*/
void Matrix::populate()
{
    this->resize();
    for (int i = 0; i < numberOfRows; i++)
    {
       
        for (int j = 0; j < numberOfColumns; j++)
        {
            a2DVector[i][j] = i*numberOfColumns+j;
    
        }
    }
}

// getter
int Matrix::getNumOfRows()
{
    return numberOfColumns;
} 

//getter
int Matrix::getNumOfColumns()
{
    return numberOfRows;
}
