#include <iostream>  
using namespace std;  

void fun(int arr[])  
{  
    std::cout << "Size of array is : " <<sizeof(arr)<< std::endl;  
}  


 int main()  
{  
    
  int arr[]={10,20,30,40,50};  
  std::cout << "Size of the array 'arr' is : "<<sizeof(arr) << std::endl;
  
  fun(arr);
  
  return 0;  
}  