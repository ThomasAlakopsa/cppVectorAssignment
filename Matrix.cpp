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
    for (int i = 0; i < numberOfRows; i++)
    {
        if (i != 0)
        {
            for (int j = 0; j < numberOfColumns; j++)
            {
                if (abs(a2DVector[i][j]) > 999)
                {
                    cout << "---";
                }
                else if (abs(a2DVector[i][j]) > 99)
                {
                    cout << "--";
                }
                else if (abs(a2DVector[i][j]) > 9)
                {
                    cout << "-";
                }
                cout << "----";
            }
            cout << "-" << endl;
        }
        cout << "| ";

        for (int j = 0; j < numberOfColumns; j++)
        {
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
            a2DVector[i][j] = i * numberOfColumns + j;
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

Matrix Matrix::operator+(Matrix const obj)
{

    Matrix result = Matrix(numberOfRows, obj.numberOfRows);

    if (numberOfRows == obj.numberOfRows && numberOfColumns == obj.numberOfColumns)
    {
        for (int i = 0; i < numberOfRows; i++)
        {
            for (int j = 0; j < numberOfColumns; j++)
            {
                double num = a2DVector[i][j] + obj.a2DVector[i][j];
                result.add(i, j, num);
            }
        }
    }
    return result;
}

Matrix Matrix::operator-(Matrix const obj)
{

    Matrix result = Matrix(numberOfRows, obj.numberOfRows);

    if (numberOfRows == obj.numberOfRows && numberOfColumns == obj.numberOfColumns)
    {
        for (int i = 0; i < numberOfRows; i++)
        {
            for (int j = 0; j < numberOfColumns; j++)
            {
                double num = a2DVector[i][j] - obj.a2DVector[i][j];
                result.add(i, j, num);
            }
        }
    }
    return result;
}

Matrix Matrix::operator*(double const multiplier)
{

    Matrix result = Matrix(numberOfRows, numberOfColumns);

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; j++)
        {
            double num = a2DVector[i][j] * multiplier;
            result.add(i, j, num);
        }
    }
    return result;
}

Matrix Matrix::transpose()
{
    Matrix result = Matrix(numberOfColumns, numberOfRows); // new matrix with swaped size

    for(int i = 0; i < numberOfRows; ++i)
    {
        for(int j = 0; j < numberOfColumns; ++j)
        {
            double num = a2DVector[i][j];
            result.add(j,i,num); // swap j and i for the correct postion of the transpose
        }
    }
    return result;
}

Matrix Matrix::multiply(Matrix const obj)
{
    Matrix result = Matrix(numberOfRows, obj.numberOfColumns);
    double num = 0;

    if(numberOfColumns == obj.numberOfRows)
    {
        for(int i = 0; i < numberOfRows; i++)
        {
            for(int j = 0; j < obj.numberOfColumns; j++)
            {
                for(int l = 0; l < obj.numberOfRows; l++)
                {
                    num += a2DVector[i][l] * obj.a2DVector[l][j];
                }
                result.a2DVector[i][j] = num;
                num = 0;
            }
        }
    }else
    {
        cout << "Matrix is not the right size!" << endl;
    }

    return result;
    
}