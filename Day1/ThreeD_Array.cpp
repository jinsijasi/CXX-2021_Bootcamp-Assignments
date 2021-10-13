/*Write a program which takes a positive number from user, and then fill in a 3-dimensional array of size [8,9,11]
with random positive numbers smaller than the one user has provided – pretty print the array.*/

#include <iostream>
#include <array>
#include <random>
#include <cstdlib>


using Array = std::array<std::array<std::array<int, 11>, 9>, 8>;
int main()
{
    Array arr_3D;
    unsigned int randomNumber;
    unsigned int element;

    std::cout << "Enter a positive number for the array" << std::endl;
    std::cin >> randomNumber;
    
    for(auto &page:arr_3D) //3D array printing with range of for loop
        {
            for(auto &col : page)
            {
                for(unsigned int row : col)

        for(unsigned int index = 0; index < 792; index++) 
    {
        element = (rand() % randomNumber) + 1;
        for(auto &page:arr_3D) //3D array printing with range of for loop
        {
            for(auto &col : page)
            {
                for(unsigned int row : col)
                {
                    std::cout<< "The elements of 3D asymm_arr are " << element<< std::endl;
                }

            }
        }
    }     

}