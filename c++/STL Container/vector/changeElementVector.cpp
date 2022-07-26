#include<iostream>
#include<vector>


int main (){
    
  std::vector<int> num{1,2,3,4,5};
  
  for(const int& i: num){
      std:: cout << i << " " ;
  }
  
  std:: cout << "\n";
  std:: cout << "Change elements \n";
  
  //change vector elements
  num.at(0) = 10;
  num[2] = 20;
  
  for(const int& i : num){
      std:: cout<< i << " ";
  }
    
    return 0;
}