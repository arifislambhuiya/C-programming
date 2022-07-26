#include <iostream>  
using namespace std;  

void fun(int arr[])  
{  
    std::cout << "Size of array is : " <<sizeof(arr)<< std::endl;  
}  


 int main()  
{  
    
  int arr[]={10,20,30,40,50};  
  
  fun(arr);
  
  return 0;  
}  



/*
In the above program, we have tried to print the size of the array using the function. In this case, we have created an array of type integer, and we pass the 'arr' to the function fun(). The fun() would return the size of the integer pointer, i.e., int*, and the size of the int* is 8 bytes in the 64-bit operating system.

*/