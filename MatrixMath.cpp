#include <iostream>
#include <vector>
#include "MatrixMath.h"

using namespace std;

/*
   function that takes 2 rowVectors and returns the additions of them
*/

 RowVector* MatrixMath::add2RowVectors(RowVector *rvec1, RowVector *rvec2)
 {
   // make new RowVector that will contain the result
   RowVector *result = new RowVector(rvec1->getNumOfRows());

   // guard that makes sure both rows are the same size 
   if(rvec1->getNumOfRows() == rvec2->getNumOfRows())
   {
      // loops through each element and adds them in the new RowVector
      for (int i = 0; i < rvec2->getNumOfRows(); i++)
      {
        double num = rvec1->a2DVector[0][i] + rvec2->a2DVector[0][i];
        result->add(0, i, num); // adds them 
      }             
   }else{
      //nothing
   }

    return result;
 }

 /*
   function that takes 2 colomVectors and returns the addition of them
 */

  ColVector* MatrixMath::add2ColVectors(ColVector *cvec1, ColVector *cvec2)
  {
     
     // make new ColumVector that will contain the result
     ColVector *result = new ColVector(cvec1->getNumOfColumns());

      // guard that makes sure both colums are the same size 
      if(cvec1->getNumOfColumns() == cvec2->getNumOfColumns())
      {
         // loops through each element and adds them in the new ColumVector
          for (int i = 0; i < cvec2->getNumOfColumns(); i++)
          {
             double num = cvec1->a2DVector[i][0] + cvec2->a2DVector[i][0];
             result->add(i, 0, num); // adds them 
          }             
      }else{
         // nothing
      }

    return result;
  }