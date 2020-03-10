#include <iostream>
#include <list>
#include <vector>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int numOfRows, int numOfCols)
{
    this->numberOfRows = numOfRows;
    this->numberOfColumns = numOfCols;
    this->resize();
};

void Matrix::resize()
{
    a2DVector.resize(numberOfRows);
    for (int i = 0; i < numberOfRows; i++)
    {
        a2DVector[i].resize(numberOfColumns);
    }
}

void Matrix::print2DVec()
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
void Matrix::checkSize()
{
    cout << a2DVector.size() << endl;
    cout << a2DVector[0].size() << endl;
}

void Matrix::populate()
{
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; j++)
        {
            a2DVector[i][j] = i*10+j;
        }
    }
}