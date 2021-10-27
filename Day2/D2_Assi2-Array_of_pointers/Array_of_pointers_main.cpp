
/*Modify your first assignment from yesterday to receive the dimensions of the arrays from the user.*/
#include "Array_of_pointers.h"

int main()
{
    unsigned int r;
    unsigned int x_size;
    unsigned int y_size;
    unsigned int z_size;
    std::cout << "Specify a positive number under 100" << std::endl;
    std::cin >> r;
    std::cout << " " << std::endl;
    std::cout << "Specify a positive number as first dimension (x)" << std::endl;
    std::cin >> x_size;
    std::cout << "Specify a positive number as second dimension (y)" << std::endl;
    std::cin >> y_size;
    std::cout << "Specify a positive number as third dimension (z)" << std::endl;
    std::cin >> z_size;
    unsigned int ***array_ptr = new unsigned int **[x_size];

    unsigned int ***addressArray = feedArray(x_size, y_size, z_size, r, array_ptr);
    prettyPrint(addressArray, x_size, y_size, z_size);
    releaseMemory(x_size, y_size, z_size, array_ptr);
return 0;
}
