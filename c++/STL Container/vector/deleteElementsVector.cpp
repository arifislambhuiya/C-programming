#include<iostream>
#include<vector>

int main(){
    
    std:: vector<int> num {1,2,3,4,5};
    
    for(const int& i: num){
        std:: cout << i << " ";
    }
    
    //delete elements for vector
    
    num.pop_back();
    num.pop_back();
    
    std::cout << "\nUpdated Vector: ";
     for (const int& i : num){
         std:: cout << i << " ";
     }
    
    return 0;
}





