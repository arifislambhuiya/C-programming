#include <iostream>

int getMax(int arr[],int size){
    int max = arr[0];
    
    for(int i = 1;i<size; i++){
        if(arr[i] > max)
        max = arr[i];
    }
    
    return max;
}

int getMin(int arr[],int size){
    int min = arr[0];
    
    for(int i = 1;i<size; i++){
        if(arr[i] < min)
        min = arr[i];
    }
    
    return min;
}



int main(){
    
    int arr[7] ={3,8,6,9,55,22,4};
    
    
   /*
   std:: cout <<"The max value is : " << getMax(arr, 7) <<"\n";
   
   std:: cout << "The min value is : " << getMin(arr,7);
   */
    
    return 0;
}








