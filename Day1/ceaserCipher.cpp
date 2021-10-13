#include <iostream>
#include <string>


int main() {
 std::string cipherText;
 std::string actualText;
 int asciiCipher;
 int asciiText;


 int key;

 std::cout << "Enter a cipherText in blockletters: " << std::endl;
 std::cin >> cipherText;
 std::cout << "Enter the key: " << std::endl;
 std::cin >> key;
 

 
  for(char c:cipherText)
  {
      asciiCipher = int(c);
      asciiText = asciiCipher - key;
      if(asciiText < int('A'))
      {          
          int diff =  int('A') - asciiText;
          asciiText = int('Z')- diff;
          actualText = char(asciiText);
          std::cout << actualText;
  
      }
      else
      {
      
      actualText = char(asciiText);
      std::cout << actualText;
      }
  }
      
  
 
 return 0;

}