#ifndef THREED_ARRAY_RANDOMNOS_H
#define THREED_ARRAY_RANDOMNOS_H
#include <random>
#include <iostream>
#include<time.h>


const unsigned int index_i = 8;
const unsigned int index_j = 9;
const unsigned int index_k = 11;

void inputArray(unsigned int (&array_3d)[index_i][index_j][index_k], unsigned int &input);
void prettyPrint(unsigned int (&array_3d)[index_i][index_j][index_k]);


#endif // THREED_ARRAY_RANDOMNOS_H