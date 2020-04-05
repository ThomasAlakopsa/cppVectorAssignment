#include <iostream>
#include <list>
#include <vector>
#include "ColVector.h"
#include "RowVector.h"


using namespace std; 

ColVector::ColVector(int numOfRows):Matrix(numOfRows, 1){}

ColVector ColVector::operator +(ColVector const obj){

    ColVector result = ColVector(obj.numberOfRows);

    if(numberOfRows == obj.numberOfRows)
   {
      // loops through each element and adds them in the new ColumVector
         for (int i = 0; i < numberOfRows; i++)
         {
            double num = a2DVector[i][0] + obj.a2DVector[i][0];
            result.add(i, 0, num); // adds them 
         }             
   }

    return result;
}

ColVector ColVector::operator -(ColVector const obj){

    ColVector result = ColVector(obj.numberOfRows);

    if(numberOfRows == obj.numberOfRows)
   {
      // loops through each element and adds them in the new ColumVector
         for (int i = 0; i < numberOfRows; i++)
         {
            double num = a2DVector[i][0] - obj.a2DVector[i][0];
            result.add(i, 0, num); // adds them 
         }             
   }

    return result;
}


ColVector ColVector::operator * (double const multiplier)
{

   ColVector result = ColVector(numberOfRows);
   
   // loops through each element and adds them in the new RowVector
   for (int i = 0; i < numberOfRows; i++)
   {
      double num = a2DVector[i][0] * multiplier;
      result.add(i, 0, num); // adds them 
   }             
   return result;
}

double ColVector::dotProduct(ColVector const obj)
{
    double result = 0;

    if (numberOfRows == obj.numberOfRows)
    {
        for (int i = 0; i < numberOfRows; i++)
        {
            double num = a2DVector[i][0] * obj.a2DVector[i][0];
            result += num;
        }
    }
    return result;
}

ColVector ColVector::crossProduct(ColVector const obj)
{
   int size = 3;
    ColVector result = ColVector(size);

    double num = a2DVector[1][0] * obj.a2DVector[2][0] - a2DVector[2][0]* obj.a2DVector[1][0];
    result.add(0,0,num);
    num = -(a2DVector[0][0] * obj.a2DVector[2][0] - a2DVector[2][0]* obj.a2DVector[0][0]);
    result.add(1,0,num);
    num = a2DVector[0][0] * obj.a2DVector[1][0] - a2DVector[1][0]* obj.a2DVector[0][0];
    result.add(2,0,num);

    return result;
}

RowVector ColVector::transpose()
{
   RowVector result = RowVector(numberOfRows);
   
   for(int i = 0; i < numberOfRows; i++)
      {
         double num = a2DVector[i][0];
         result.add(0,i,num); // swap j and i for the correct postion of the transpose
      }
      
   return result;
}