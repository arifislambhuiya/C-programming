# include <iostream>

int main(){
   // array declaration
   int arr[5];
   
   //array definition
   arr[0] = 5;
   arr[2] = -10;
   arr[3/2] = 2;
   arr[3] = arr[0];
   arr[4] = 8;
   
   //array declaration and definition
   int arr2[5] = {3,8,7,9,5};
   
   
   for(int i = 0 ; i< 5; i++){
       
       std:: cout<< arr[i] <<" " << std:: endl;
   }
   
   for (int i = 0; i < 4 ; i ++){
       std::cout << arr2[i] <<" " << std::endl;
   }
    
    return 0;
}












