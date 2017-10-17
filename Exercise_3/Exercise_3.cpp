#include <vector>
#include <iostream>

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
