/*Modify your first assignment from yesterday to receive the dimensions of the arrays from the user.*/
#include <iostream>
//#include <time.h>
int main()
{
    
    int x_size;
    int y_size;
    int z_size;
    
    std::cout << "Specify the first dimension (x)" << std::endl;
    std::cin >> x_size;
    std::cout << "Specify the second dimension (y)" << std::endl;
    std::cin >> y_size;
    std::cout << "Specify the third dimension (z)" << std::endl;
    std::cin >> z_size;
    unsigned int ***Array = new unsigned int **[x_size];
    for(size_t i = 0; i < x_size; i++)
    {
        Array[i] = new unsigned int *[y_size];
        for(size_t j = 0; j < y_size; j++)
        {
           Array[i][j] = new unsigned int [y_size][z_size]; 
        }

    }
 return 0;   
}