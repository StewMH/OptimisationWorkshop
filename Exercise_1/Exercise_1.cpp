#include <iostream>
#include <vector>

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
      //std::cout << i << std::endl;
    }
  }
  //for (unsigned int prime : primes) {
  //  std::cout << prime << std::endl;
  //}
  std::cout << "There are " << primes.size() << "primes below " << max << std::endl;

  return 0;
}











