#ifndef COLVECTOR_H 
#define COLVECTOR_H

#include <iostream>
#include "Matrix.h"

using namespace std;

class RowVector; // so transpose knows what RowVector is

/**************************************************************************************
 * Ik heb ColVector een aparte class gegeven voor overzichtelijkheid.
 * De opdracht was erg onduidelijk over of alles nou in een class was gewenst of niet
 * ************************************************************************************/

class ColVector : public Matrix
{
    public:
        ColVector(int numOfRows); // contruct a ColVector with N rows and 1 collumn

        ColVector operator + (ColVector const obj); // add two collumn Vectors together
        ColVector operator - (ColVector const obj); // subtract two collumn vectors 
        ColVector operator * (double const num); // multiply a collumn vector with a double

        double dotProduct(ColVector const obj); // return the dot product from a collumn vector
        ColVector crossProduct(ColVector const obj); // return the cross product from a collumns vector
        RowVector transpose(); // tranpose a Colvector, this always results in a row Vector
    };

#endif