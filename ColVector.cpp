#include <iostream>
#include <list>
#include <vector>
#include "ColVector.h"
#include "RowVector.h"


using namespace std; 

/*********************************************************
 * Colvector is a matrix that always has one collumn
 * *******************************************************/

ColVector::ColVector(int numOfRows):Matrix(numOfRows, 1){}


/*****************************
 * add 2 colvectors toghether 
 * ***************************/

ColVector ColVector::operator +(ColVector const obj){

    ColVector result = ColVector(numberOfRows); // create result obj of same the size 

   if(numberOfRows == obj.numberOfRows) // check if both are equal size (else you can't add them)
   {
      // loops through each element and adds them in the new ColumVector
         for (int i = 0; i < numberOfRows; i++)
         {
            double num = a2DVector[i][0] + obj.a2DVector[i][0];
            result.add(i, 0, num); // adds them to the results 
         }             
   }else{cout << "you can't add these two ColVectors" << endl;}

    return result;
}

/******************************
 * subtract two collumn vectors
 * ****************************/

ColVector ColVector::operator -(ColVector const obj){

    ColVector result = ColVector(obj.numberOfRows); // create result obj of the same size

    if(numberOfRows == obj.numberOfRows)
   {
      // loops through each element and subtracts them in the new ColumVector
         for (int i = 0; i < numberOfRows; i++)
         {
            double num = a2DVector[i][0] - obj.a2DVector[i][0];
            result.add(i, 0, num); // adds the value to the result
         }             
   }
   else{cout << "you can't subtract these two ColVectors" << endl;}

    return result;
}

/************************************
 * multiply a Colvector with a double
 * *********************************/

ColVector ColVector::operator * (double const multiplier)
{

   ColVector result = ColVector(numberOfRows); // create result obj of the same size
   
   // loops through each element and adds them in the new ColVector
   for (int i = 0; i < numberOfRows; i++)
   {
      double num = a2DVector[i][0] * multiplier;
      result.add(i, 0, num); // adds the value too result
   }             
   return result;
}

/***************************************
 * get the DOT product of two Colvectors
 * *************************************/

double ColVector::dotProduct(ColVector const obj)
{
    double result = 0; // create result

    if (numberOfRows == obj.numberOfRows) // guard for the same size
    {
        for (int i = 0; i < numberOfRows; i++)
        {
            double num = a2DVector[i][0] * obj.a2DVector[i][0];
            result += num;
        }
    }
    else{cout << "the colvectors are not the same size" << endl;}

    return result;
}


/**************************************************
 * get the cross products of 2 collumn vectors
 * 
 * i = (A[1][0]*B[2][0]-A[2][0]*B[1][0])
 * j = -(A[0][0]*B[2][0]-A[2][0]*B[0][0])
 * K = (A[0][0]*B[1][0]-A[1][0]*B[0][0])
 * ***********************************************/

ColVector ColVector::crossProduct(ColVector const obj)
{
   ColVector result = ColVector(numberOfRows); // create result

   if(numberOfRows == obj.numberOfRows)
   {
      double num = a2DVector[1][0] * obj.a2DVector[2][0] - a2DVector[2][0]* obj.a2DVector[1][0];
      result.add(0,0,num);
      num = -(a2DVector[0][0] * obj.a2DVector[2][0] - a2DVector[2][0]* obj.a2DVector[0][0]);
      result.add(1,0,num);
      num = a2DVector[0][0] * obj.a2DVector[1][0] - a2DVector[1][0]* obj.a2DVector[0][0];
      result.add(2,0,num);
   }else{
      cout << "can't get the cross product of these 2 collumn vectors" << endl;
   }

   return result;
}

/****************************************
 * Transpose a Colvector
 * This will always result in a RowVector
 * *************************************/

RowVector ColVector::transpose()
{
   RowVector result = RowVector(numberOfRows); // create result

   for(int i = 0; i < numberOfRows; i++) // iterate through the ColVector
      {
         double num = a2DVector[i][0];
         result.add(0,i,num); // add the value too the RowVector
      }
      
   return result;
}