#ifndef Array_of_pointers_H
#define Array_of_pointers_H

#include <iostream>
#include <time.h>

unsigned int ***feedArray(unsigned int &, unsigned int &, unsigned int &, unsigned int &, unsigned int ***);
void prettyPrint(unsigned int ***, unsigned int &, unsigned int &, unsigned int &);
void releaseMemory(unsigned int &, unsigned int &, unsigned int &, unsigned int ***);


#endif //Array_of_pointers_H