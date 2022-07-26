# include <iostream>
# include <array> 

//Using array class:
int main(){
  std:: array<std:: string,4>colors{"Orange","Blue","Red","Yellow"};
  
  for( int i = 0 ; i < 4 ; i ++){
      std:: cout<< colors[i] << "\n";
  }
    
    return 0;
}