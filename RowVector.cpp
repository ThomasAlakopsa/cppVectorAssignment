#include <iostream>
#include <list>
#include <vector>
#include "RowVector.h"
#include "ColVector.h"

using namespace std;

RowVector::RowVector(int numOfColumns) : Matrix(1, numOfColumns) {}


/*****************************
 * add 2 Rowvectors toghether 
 * ***************************/

RowVector RowVector::operator+(RowVector const obj)
{

    RowVector result = RowVector(numberOfColumns);

    // guard that makes sure both rows are the same size
    if (numberOfColumns == obj.numberOfColumns)
    {
        // loops through each element and adds them in the new RowVector
        for (int i = 0; i < numberOfColumns; i++)
        {
            double num = a2DVector[0][i] + obj.a2DVector[0][i];
            result.add(0, i, num); // adds them
        }
    }else
    {
        cout << "the rowvectors are not the same size " << endl;
    }
    return result;
}


/******************************
 * subtract two row vectors
 * ****************************/

RowVector RowVector::operator-(RowVector const obj)
{

    RowVector result = RowVector(numberOfColumns);

    // guard that makes sure both rows are the same size
    if (numberOfColumns == obj.numberOfColumns)
    {
        // loops through each element and adds them in the new RowVector
        for (int i = 0; i < numberOfColumns; i++)
        {
            double num = a2DVector[0][i] - obj.a2DVector[0][i];
            result.add(0, i, num); // adds them
        }
    }else
    {
        cout << "the rowvectors are not the same size " << endl;
    }
    
    
    return result;
}

/************************************
 * multiply a rowvector with a double
 * *********************************/

RowVector RowVector::operator * (double const multiplier)
{

   RowVector result = RowVector(numberOfColumns);
   
   // loops through each element and adds them in the new RowVector
   for (int i = 0; i < numberOfColumns; i++)
   {
      double num = a2DVector[0][i] * multiplier;
      result.add(0, i, num); // adds them 
   }             
   return result;
}

/***************************************
 * get the DOT product of two rowvectors
 * *************************************/

double RowVector::dotProduct(RowVector const obj)
{
    double result = 0;

    if (numberOfColumns == obj.numberOfColumns) // check if they are the same size
    {
        for (int i = 0; i < numberOfColumns; i++) // iterate through every collumn
        {
            double num = a2DVector[0][i] * obj.a2DVector[0][i]; // multiply the two numbers
            result += num; // add them too result
        }
    }else
    {
        cout << "the Rowvectors are not the same size." << endl;
    }
    
    return result;
}

/**************************************************
 * get the cross products of 2 row vectors
 * 
 * i = (A[0][1]*B[0][2]-A[0][2]*B[0][1])
 * j = -(A[0][0]*B[0][2]-A[0][2]*B[0][0])
 * K = (A[0][0]*B[0][1]-A[0][1]*B[0][0])
 * ***********************************************/

RowVector RowVector::crossProduct(RowVector const obj)
{
    RowVector result = RowVector(numberOfColumns);

    if(numberOfColumns == obj.numberOfColumns)
    {
        double num = a2DVector[0][1] * obj.a2DVector[0][2] - a2DVector[0][2]* obj.a2DVector[0][1];
        result.add(0,0,num);
        num = -(a2DVector[0][0] * obj.a2DVector[0][2] - a2DVector[0][2]* obj.a2DVector[0][0]);
        result.add(0,1,num);
        num = a2DVector[0][0] * obj.a2DVector[0][1] - a2DVector[0][1]* obj.a2DVector[0][0];
        result.add(0,2,num);
    }else
    {
        cout << "RowVectors are not the same size" << endl;
    }
    

    return result;
}


/****************************************
 * Transpose a RowVector
 * This will always result in a ColVector
 * *************************************/

ColVector RowVector::transpose()
{
    ColVector result = ColVector(numberOfColumns);
    
    for(int i = 0; i < numberOfColumns; i++) // iterate through the RowVector
        {
            double num = a2DVector[0][i];
            result.add(i,0,num); // add the value too the RowVector
        }
    return result;
}