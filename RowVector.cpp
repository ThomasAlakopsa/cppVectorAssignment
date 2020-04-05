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

ColVector RowVector::transpose()
{
    ColVector result = ColVector(numberOfColumns);

    for(int i = 0; i < numberOfColumns; i++)
    {
        double num = a2DVector[0][i];
        result.add(i,0,num);
    }
    return result;
}