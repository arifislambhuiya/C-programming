// #include <iostream>
// #include<vector>
// using namespace std;

// bool ascendingCompare(int a, int b) {
// 	return a < b;
// }
// bool descendingCompare(int a, int b) {
// 	return a > b;
// }



// void sortAscending(vector<int>& numbersVector)
// {
// 	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
// 	{
// 		int bestIndex = startIndex;

// 		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
// 		{
// 			// We are doing comparison here
// 			if (ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
// 				bestIndex = currentIndex;
// 		}

// 		swap(numbersVector[startIndex], numbersVector[bestIndex]);
// 	}
// }


// void sortDescending(vector<int>& numbersVector)
// {
// 	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
// 	{
// 		int bestIndex = startIndex;

// 		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
// 		{
// 			// We are doing comparison here
// 			if (descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
// 				bestIndex = currentIndex;
// 		}

// 		swap(numbersVector[startIndex], numbersVector[bestIndex]);
// 	}
// }




// void customSort(vector<int>& numbersVector, bool(*compareFunctionPtr)(int, int))
// {
// 	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
// 	{
// 		int bestIndex = startIndex;

// 		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
// 		{
// 			// We are doing comparison here
// 			if (compareFunctionPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
// 				bestIndex = currentIndex;
// 		}

// 		swap(numbersVector[startIndex], numbersVector[bestIndex]);
// 	}
// }


// void printNumbers(vector<int>& numbersVector) {
// 	for (int i = 0; i < numbersVector.size(); ++i)
// 		cout << numbersVector[i] << ' ';
// }



// int main()
// {
// 	vector<int> numbersVector = { 4,2,1,3,6,5 };
// 	//sortAscending(numbersVector);
// 	//sortDescending(numbersVector);

// 	bool (*funcPtr)(int, int) = descendingCompare;
// 	customSort(numbersVector, funcPtr);
// 	printNumbers(numbersVector);

// 	system("pause>0");
// }


// array::cbegin example
#include <iostream>
#include <array>

int main ()
{
  std::array<int,5> myarray = { 2, 16, 77, 34, 50 };

  std::cout << "myarray contains:";

  for ( auto it = myarray.cbegin(); it != myarray.cend(); ++it )
    std::cout << ' ' << *it;   // cannot modify *it

  std::cout << '\n';

  return 0;

}