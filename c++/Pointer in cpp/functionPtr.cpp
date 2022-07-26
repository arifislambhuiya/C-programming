#include <iostream>
#include<vector>
using namespace std;

bool ascendingCompare(int a, int b){
    return a < b;
}

bool descendingCompare(int a, int b){
    return a > b;
}

void cusromFunc(vector<int>&numbersVector,bool (*compareFuncPtr)(int, int){
    for(int startIndex = 0; startIndex<numbersVector.size();startIndex++){
       int bestIndex = startIndex;
       
       for(int currentIndex = startIndex+1;currentIndex< numbersVector.size();currentIndex++){
           
           if(ascendingCompare(numbersVector[currentIndex],numbersVector[bestIndex]))
           
           bestIndex = currentIndex;
       }
       swap(numbersVector[startIndex],numbersVector[bestIndex]);
    }
}

void print(vector<int> & numbersVector){
    
    for(int i = 0; i< numbersVector.size(); ++ i)
    cout<<numbersVector[i]<<" ";
}

int main (){
    
  vector<int> numbersVector ={8,4,7,3,9,6};
 bool (*funcPtr)(int,int) = ascendingCompare;
 
 sortAscending(numbersVector);
 print(numbersVector);
 
 return 0;
}