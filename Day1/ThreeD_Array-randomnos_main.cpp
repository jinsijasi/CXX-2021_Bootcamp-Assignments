
#include "ThreeD_Array_randomnos.h"

int main() 
{
    unsigned int arr_3d[index_i][index_j][index_k];
    unsigned int input;
    
    std::cout<<"Enter positive integer between 1 and 100" <<std::endl;
    std::cin>> input;
    
    inputArray(arr_3d, input);
    prettyPrint(arr_3d);

}