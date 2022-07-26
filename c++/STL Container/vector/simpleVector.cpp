#include <iostream>
#include <vector>

int main (){
 //initializer list   
  std::vector<int> vector1 = {1,2,3,4,5};  
  
 //uniform initialization
 std::vector<int> vector2{1,2,3,4,5};
 
 //method 3 
 std::vector<int> vector3(5 ,12);
 
 std:: cout << "vector1 = ";
  for (const int& i: vector1){
      std:: cout << i << " " ;
  }
 
 std:: cout << "\nvector2 = ";
  for (const int& i: vector2){
      std:: cout << i << " " ;
  }
 
 
 std:: cout << "\nvector3 = ";
  for (const int& i: vector3){
      std:: cout << i << " " ;
  }
 
    return 0;
}






