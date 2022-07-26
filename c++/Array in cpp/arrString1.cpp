/*5 way to delaration array of string in cpp
 1. pointers
 2.2D array
 3.string class:
 4 vector class:
 5.array class:
 */
 
#include<iostream>

int main()
{
//Using pointer
const char *colors[4] = {"Blue","Red","Orange","Yellow"};

  // printing String stored in pointer array
   for (int i = 0; i< 4; i++){
      std::cout << colors[i] << "\n";
   }   
      
    return 0;
}
    