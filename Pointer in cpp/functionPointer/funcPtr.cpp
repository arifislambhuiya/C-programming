#include <iostream>
#include <vector>
using namespace std;


bool ascendingCompare(int a,int b){
  return a < b;    
}

bool descendingCompare(int a,int b){
    return a > b;
}


void sortAscending(vector<int>& numbersVector){
      for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++){
          int  bestIndex = startIndex;

        for(int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++){
            if(ascendingCompare(numbersVector[currentIndex],numbersVector[startIndex]))
             bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex],numbersVector[bestIndex]);
      }
}

void printNumbers(vector<int>& numbersVector) {
	for (int i = 0; i < numbersVector.size(); ++i)
		cout << numbersVector[i] << ' ';
}


int main(){
   
   vector<int> numbersVector = {5,4,36,79,64,};
    sortAscending(numbersVector);
    printNumbers(numbersVector);


//    bool (*funcPtr)(int,int) = ascendingCompare;
  system("pause>0");
}