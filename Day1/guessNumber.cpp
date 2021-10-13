#include <iostream>


int main() {
    int low = 1;
    int high = 128;
    int i;
    int guessNumber;
    bool isPrime = true;

    std::cout << "Guess a number between 1 and 128 " << std::endl;
    std::cin >> guessNumber;
    std::cout << "\n Is the number guessed a prime number? (answer 'true' or 'false')" << std::endl;
    std::cin >> isPrime;
    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= low / 2; ++i) {
                if (low % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        //if (isPrime)