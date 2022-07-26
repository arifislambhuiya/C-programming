#include <iostream>
#include <vector>

int main(){
    
   std:: vector <int> vector1 = {1,2,3,4,5};
   
   for(const int& i : vector1){
       std:: cout << i << " " ;
   }
   
   vector1.push_back(6);
   vector1.push_back(7);
   
   std:: cout << "\nUpdate vector1 = ";
   
    for( const int& i : vector1){
       std:: cout << i << " ";
   }
    
    std::cin.get();
}

