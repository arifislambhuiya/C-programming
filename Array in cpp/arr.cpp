// array::cbegin example
#include <iostream>
#include <array>

int main ()
{
  std::array<int,5> myarray = { 2, 16, 77, 34, 50 };

  std::cout << "myarray contains:";

  for ( auto t = myarray.cbegin(); t != myarray.cend(); ++t )
    std::cout << ' ' << *t;   // cannot modify *it

  std::cout << '\n';

  return 0;

}