# include <iostream>


int main(){
    
    int arr[2][3][5] = 
    {
       { 
           {2,4,6,2,1},
           {9,8,0,4,2},
           {9,4,6,7,1}
       },
       { 
           {4,7,0,3,5},
           {8,9,4,6,7},
           {6,3,9,0,3}
           
       },
     
     } ;
      
 
      for (int i=0; i < 2 ;i++){
         for( int j = 0; j < 3; j++){
             for(int k = 0; k < 0  ; k++){
                 std:: cout << i << j << k<< arr[i][j][k]  << std::endl;
             }
         }
       }
    return 0 ;
} 