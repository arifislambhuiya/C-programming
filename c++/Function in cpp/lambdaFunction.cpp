# include <iostream>
#include <vector>
# include <algorithm>


int main(){
    
  std::vector<int> v {4,1,8,6,3,7};
    
  std::for_each(v.begin(),v.end(),[](int v){
        if (v%2==0)
             std::cout << "This number is Even Number = " << v << "\n";
            else std:: cout <<" This number is Odd Number = " << v <<"\n";
    }); 
    
    return 0;
}

// cpp lambda function and for_each it's similar javaScript arrow function and forEach method 


//This is javaScript forEach method and arrow function

/*
var arr = [3,8,9,5,7,4]
arr.forEach((v)=>{
    if(v%2==0){
        console.log(`This number is Even number: ${v}`)
    }else{
        console.log(`This number is Odd number: ${v}`)
    }
})

*/








