#include <iostream>
#include <list>
#include <vector>
#include "ColVector.h"


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