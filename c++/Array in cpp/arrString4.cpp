#include <iostream>
#include<vector>


int main(){
   std:: vector<std::string> colors {"Blue","Red", "Yellow","Orange"} ;
   
   
   for(int i = 0; i<4; i++){
       std:: cout << colors[i] <<"\n";
   }
    
    return 0;
}