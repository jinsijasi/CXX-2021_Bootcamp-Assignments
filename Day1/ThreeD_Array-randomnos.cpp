/*Write a program which takes a positive number from user, 
and then fill in a 3-dimensional array of size [8,9,11]
with random positive numbers smaller than the one user has 
provided – pretty print the array.*/

#include "ThreeD_Array_randomnos.h"


    
    //unsigned int *ptr_arr_3d = &arr_3d[][][];

    //Define array with random integers
    void inputArray(unsigned int (&array_3d)[index_i][index_j][index_k], unsigned int &input)
    {
        // random seed
        srand (time(NULL));
        
    for(unsigned int k = 0; k < index_k; k++)
        {   
            for(unsigned int j = 0; j < index_j; j++)
            {
                for(unsigned int i =0; i < index_i; i++)
                {
                array_3d[i][j][k] = rand() % input;
                }

            }
        }
    }


    //pretty print array
    void prettyPrint(unsigned int (&array_3d)[index_i][index_j][index_k])
    {

        std::cout << "The array is: " << std:: endl;
        for(unsigned int k = 0; k < index_k; k++)
        {   
            std::cout << '[' << std:: endl;
            for(unsigned int i = 0; i < index_i; i++)
         
            {
                for(unsigned int j = 0; j < index_j; j++)
                {
                    std::cout << array_3d[i][j][k];

                    std::cout << '\t';
                    if(j == (index_j - 1))
                    {
                    std::cout << '\n';
                    }

                }
            
            }
            //{
            /*print2darray(arr_3d[j], index_i);
            if(k < index_i-k)
            {
                std::cout<< ",";
            }*/
            std::cout << std::endl;
            std::cout << ']' << std:: endl;
        }
    }
    
