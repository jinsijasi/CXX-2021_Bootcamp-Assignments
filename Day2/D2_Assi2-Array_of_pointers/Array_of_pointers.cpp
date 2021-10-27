
/*Modify your first assignment from yesterday to receive the dimensions of the arrays from the user.*/
#include "Array_of_pointers.h"


   unsigned int ***feedArray(unsigned int &x_size, unsigned int &y_size, unsigned int &z_size, unsigned int &r, unsigned int ***array_ptr)
   {
        
    // random seed
    srand (time(NULL));
    for(unsigned int i = 0; i < x_size; i++) 
    {
        unsigned int **x_pointer = new unsigned int *[y_size];
        array_ptr[i] = x_pointer;
        
        for(unsigned int j = 0; j < y_size; j++) {
            unsigned int *y_pointer = new unsigned int[z_size];
            x_pointer[j] = y_pointer;
            //std::cout << "j: " << j << std::endl;
            for(unsigned int k = 0; k < z_size; k++) {
                
                //std::cout << "i: " << i << " j: " << j << " k: " << k << std::endl;
                y_pointer[k] = rand() % r;
            }
        }
    }
    return array_ptr;

   }
           //pretty print array
   void prettyPrint(unsigned int ***addressArray, unsigned int &x_size, unsigned int &y_size, unsigned int &z_size)
   
    {

        std::cout << "The array is: " << std:: endl;
        for(unsigned int k = 0; k < z_size; k++)
        {   
            std::cout << '[' << std:: endl;
            for(unsigned int i = 0; i < x_size; i++)
         
            {
                for(unsigned int j = 0; j < y_size; j++)
                {
                    std::cout << addressArray[i][j][k];

                    std::cout << '\t';
                    if(j == (y_size - 1))
                    {
                    std::cout << '\n';
                    }
                }
            }
            std::cout << std::endl;
            std::cout << ']' << std:: endl;
        }
    }
       

    void releaseMemory(unsigned int &x_size, unsigned int &y_size, unsigned int &z_size, unsigned int ***array_ptr)
    {
        for(unsigned int i = 0; i < x_size; i++)
        {
            for(unsigned int j = 0; j < y_size; j++) 
            {
                delete [] array_ptr[i][j];
            }
         delete[] array_ptr[i];
        }
     delete[] array_ptr;


    }
 

    
