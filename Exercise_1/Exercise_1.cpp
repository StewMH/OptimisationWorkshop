#include <iostream>
#include <vector>
#include <cmath>

// Find total number of primes below 1 million
// Compile with
// g++ Exercise_1.cpp -std=c++14 -OX -g -o Exercise_1
// or
// clang Exercise_1.cpp -std=c++14 -OX -g -lstdc++ -lm -o Exercise_1
// where X goes from 0 to 3
// Time and profile your output
// time ./Exercise_1
// valgrind --tool=cachegrind ./Exercise_1

bool isPrime(unsigned int n) {
  for (unsigned int i = 2; i < n; i++) {
    if (n%i == 0) {
      return false;
    }
  }
  return true;
}


int main() {

  unsigned int max = 1000000;
  std::vector<unsigned int> primes;
  for (unsigned int i = 2; i < max; ++i) {
    if (isPrime(i)) {
      primes.push_back(i); 
    }
  }
  std::cout << "There are " << primes.size() << " primes below " << max << std::endl;

  return 0;
}
