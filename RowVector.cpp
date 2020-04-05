#include <iostream>
#include <list>
#include <vector>
#include "RowVector.h"
#include "ColVector.h"

using namespace std;

RowVector::RowVector(int numOfColumns) : Matrix(1, numOfColumns) {}

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
    }
    return result;
}

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
    }
    return result;
}

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

double RowVector::dotProduct(RowVector const obj)
{
    double result = 0;

    if (numberOfColumns == obj.numberOfColumns)
    {
        for (int i = 0; i < numberOfColumns; i++)
        {
            double num = a2DVector[0][i] * obj.a2DVector[0][i];
            result += num;
        }
    }
    return result;
}

RowVector RowVector::crossProduct(RowVector const obj)
{
    int size = 3;
    RowVector result = RowVector(size);

    double num = a2DVector[0][1] * obj.a2DVector[0][2] - a2DVector[0][2]* obj.a2DVector[0][1];
    result.add(0,0,num);
    num = -(a2DVector[0][0] * obj.a2DVector[0][2] - a2DVector[0][2]* obj.a2DVector[0][0]);
    result.add(0,1,num);
    num = a2DVector[0][0] * obj.a2DVector[0][1] - a2DVector[0][1]* obj.a2DVector[0][0];
    result.add(0,2,num);

    return result;
}

ColVector RowVector::transpose()
{
    ColVector result = ColVector(numberOfColumns);
    
    for(int i = 0; i < numberOfColumns; i++)
        {
            double num = a2DVector[0][i];
            result.add(i,0,num); // swap j and i for the correct postion of the transpose
        }
    return result;
}