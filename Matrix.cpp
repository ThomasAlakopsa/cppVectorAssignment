#include <iostream>
#include <list>
#include <vector>
#include "Matrix.h"
#include "ColVector.h"

using namespace std;

/********************************************************
 * create a matrix with a given number of rows and columns
 ********************************************************/
Matrix::Matrix(int numOfRows, int numOfCols)
{
    this->numberOfRows = numOfRows; // set number of rows
    this->numberOfColumns = numOfCols; // set number of collumns
    this->resize(); // make the correct size
};

/****************************************
 * give the matrix the correct dimensions
 * *************************************/

void Matrix::resize()
{
    a2DVector.resize(numberOfRows); //first the amount of rows
    for (int i = 0; i < numberOfRows; i++)
    {
        // for every row, resize the number of collumns
        a2DVector[i].resize(numberOfColumns); 
    }
}

/************************************
 * print any matrix atleast decently 
 * ********************************/

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

/**************************************************
 * help function to check the size of the matrix
 *************************************************/

void Matrix::checkSize()
{
    cout << "columns: " << a2DVector.size() << endl;
    cout << "rows: " << a2DVector[0].size() << endl;
}

/**************************************************************
 * add and replace functions
 * adds / replaces a value in a specific location in the matrix
 *************************************************************/
void Matrix::add(int row, int col, double num)
{
    a2DVector[row][col] = num;
}

/*********************************************
 * function too fill the matrix with some data
 * this is simple a iteration from 0 to N
 *********************************************/
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
// int Matrix::getNumOfRows()
// {
//     return numberOfColumns;
// }

// //getter
// int Matrix::getNumOfColumns()
// {
//     return numberOfRows;
// }


/*****************************
 *  Add two matrixes togther
 * **************************/

Matrix Matrix::operator+(Matrix const obj)
{

    Matrix result = Matrix(numberOfRows, obj.numberOfRows); // create result of the correct size

    // guard to check if the matrixes are the right size
    if (numberOfRows == obj.numberOfRows && numberOfColumns == obj.numberOfColumns)
    {
        //iterate throught the rows
        for (int i = 0; i < numberOfRows; i++)
        {
            //iterate throught the collumns
            for (int j = 0; j < numberOfColumns; j++)
            {
                double num = a2DVector[i][j] + obj.a2DVector[i][j]; // add the two values toghther
                result.add(i, j, num); // put those values in the result Matrix
            }
        }
    }
    else
    {
        cout << "Matrixes are not the right size to be added" << endl;
    }
    
    return result;
}

/*************************
 * subtract two matrixes
 * ***********************/

Matrix Matrix::operator-(Matrix const obj)
{

    Matrix result = Matrix(numberOfRows, obj.numberOfRows);  // create result of the correct size

     // guard to check if the matrixes are the right size
    if (numberOfRows == obj.numberOfRows && numberOfColumns == obj.numberOfColumns)
    {
        // iterate through rows
        for (int i = 0; i < numberOfRows; i++)
        {
            // iterate through collumns
            for (int j = 0; j < numberOfColumns; j++)
            {
                double num = a2DVector[i][j] - obj.a2DVector[i][j]; // subtract the two vallues
                result.add(i, j, num); // put them in the result matrix
            }
        }
    }else
    {
        cout << "Matrixes are not the right size to be subtracted" << endl;
    }
    return result;
}

/*********************************
 * multiply a matrix with a double
 * *******************************/

Matrix Matrix::operator*(double const multiplier)
{

    Matrix result = Matrix(numberOfRows, numberOfColumns); //create the result matrix

    //iterate through rows
    for (int i = 0; i < numberOfRows; i++)
    {
        //iterate through collumns
        for (int j = 0; j < numberOfColumns; j++)
        {
            double num = a2DVector[i][j] * multiplier; // multply the matrix value with the double
            result.add(i, j, num); // put them in the result matrix
        }
    }
    return result;
}

/*********************
 * Transpose a Matrix
 * ******************/

Matrix Matrix::transpose()
{
    // create a new matrix with swaped size
    Matrix result = Matrix(numberOfColumns, numberOfRows);

    // iterate through rows
    for(int i = 0; i < numberOfRows; ++i)
    {
        // iterate through collumns 
        for(int j = 0; j < numberOfColumns; ++j)
        {
            double num = a2DVector[i][j]; // take the vallue of that position
            result.add(j,i,num); // and put them swaped in the result matrix
        }
    }
    return result;
}

/************************
 * multiply two matrixes
 * **********************/

Matrix Matrix::multiply(Matrix const obj)
{
    Matrix result = Matrix(numberOfRows, obj.numberOfColumns); // create result
    double num = 0; 

    // guard to check if they can be multiplied
    if(numberOfColumns == obj.numberOfRows)
    {
        // iterate through rows
        for(int i = 0; i < numberOfRows; i++)
        {
            // iterate through the obj collumns
            for(int j = 0; j < obj.numberOfColumns; j++)
            {
                // iterate through the obj rows
                for(int l = 0; l < obj.numberOfRows; l++)
                {
                    // add all the multiplications too the value num
                    num += a2DVector[i][l] * obj.a2DVector[l][j];
                }
                // after the interations put the value in the new matrix
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

/****************************************
 * help function to swap rows in a matrix
 * r1 will swaped with r2
 * **************************************/

void Matrix::swapRowsInMatrix(int r1, int r2) 
{ 
    // iterate through number of rows
    for (int i=0; i<=numberOfRows; i++) 
    { 
        // temp store row1 [i] in num
        double num = a2DVector[r1][i];
        // replace row1 [i] with row2 [i]  
        a2DVector[r1][i] = a2DVector[r2][i]; 
        // replace row2 [i] with row1 [i] (num)
        a2DVector[r2][i] = num; 
    } 
}

/********************************************************
 * function too order the matrix for forward elimination
 * the highest number goes on top in descending order
 * 
 * int col = which collum it should order by
 * *****************************************************/

void Matrix::orderForForwardElimination(int col)
{
    // iterate through the rows   
    for(int i = 0; i < numberOfRows; i++)
    {
        int i_max = i; // save i in i_max (the highest I)
        int v_max = a2DVector[i_max][i];  // the higest VALUE
  
        // find greater amplitude for pivot
        for (int j = i+1; j < numberOfRows; j++) 
            if (abs(a2DVector[j][i]) > v_max) // if the value is higher 
                v_max = a2DVector[j][i], i_max = j; // replace v_max with the higher value

        // Swap the greatest value row with current row
        if (i_max != i) 
            swapRowsInMatrix(i, i_max); 
    }  
}

/************************************
 * Function for forwarelimination
 * *********************************/

/***************************************************
 * V[i][n] * multiplier = TempVector
 * new row = V[i+1][n] - TempVector[n]
 * 
 * repeat this till everything under pivot is 0
 * note* reorder the matrix when you get to a new collumn
 * *************************************************/ 

void Matrix::forwardElimination()
{
    // number of times to repeat forward elimination (used for how many zero their need to be, first 2 zero's then 1 zero)
    int numberOfSteps = numberOfRows-1; 

    int foo = 2; // helper value for the correct position in the 2dvectors.

    for(int steps = 0; steps < numberOfRows-1; steps++) 
    {
        orderForForwardElimination(steps); // order the matrix
        foo-=1;
        
        for(int i = 0; i < numberOfSteps; i++)
        {
            // calculate the multplier for the row
            double multiplier = a2DVector[foo][steps] / a2DVector[steps][steps];

            for(int j = 0; j < numberOfColumns;j++)
            {
                // multiplie each value with the mutiplier and save it.
                double temp = a2DVector[steps][j] * multiplier;
                // subtract temp from the row below and you have the result.
                a2DVector[foo][j]-=temp;
            } 
            foo+=1;
        }
       
        numberOfSteps-=1;
    }

}

/**********************
 * backsubtitution 
 * *******************/

/*********************************************
 * A3 = v[2][3] / v[2][2]
 * A2 = (V[1][3] - V[1][2]*a3) / V[1][1]
 * A1 = (V[0][3] - V[0][1]*A2 - A3) / V[0][0]
 * *******************************************/

ColVector Matrix::backSubstitution()
{
    ColVector result = ColVector(numberOfRows); // create result 

    for(int i = numberOfRows-1; i >= 0; i--)
    {
        double num = a2DVector[i][numberOfRows];
        result.add(i,0,num);

        for(int j = i+1; j<numberOfRows;j++)
        {
            if(i!=j)
            {
                result.a2DVector[i][0] = result.a2DVector[i][0] - a2DVector[i][j] *  result.a2DVector[j][0];
            }
        }
        result.a2DVector[i][0] = result.a2DVector[i][0]/a2DVector[i][i];
    }

    return result;
}
