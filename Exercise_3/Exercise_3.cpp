#include <vector>
#include <iostream>

//Memory allocation example
// Compile with
// g++ Exercise_3.cpp -std=c++14 -OX -g -o Exercise_3
// or
// clang++ Exercise_3.cpp -std=c++14 -OX -g -o Exercise_3
// where X goes from 0 to 3
// Time and profile your output
// time ./Exercise_1
// valgrind --tool=callgrind ./Exercise_3

struct A 
{
 int x;
 int y;
 int z;
};


int main() {

  unsigned int max = 1000;
  std::vector<A> vec_A;
  for (unsigned int i = 0; i < max; i++) {
    A i_A;
    i_A.x = i; 
    i_A.y = i+1; 
    i_A.z = i+2; 
    vec_A.push_back(i_A);
    std::cout << vec_A.size() << std::endl;
    std::cout << vec_A.capacity() << std::endl;
  }
  std::cout << vec_A.size() << std::endl;
}
