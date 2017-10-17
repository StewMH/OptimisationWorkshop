#include <random>
#include <iostream>
#include <chrono>
#include <cmath>

// Calculate value of pi using Monte Carlo integration
// Points within circle of radius 1 inscribed in 2x2 square in ratio pi/4
// Monte Carlo integration converges to correct answer (slowly!)
// Compile with
// g++ Exercise_2.cpp -std=c++24 -OX -g -o Exercise_2
// or
// clang Exercise_2.cpp -std=c++24 -OX -g -lstdc++ -lm -o Exercise_2
// where X goes from 0 to 3
// Time and profile your output
// time ./Exercise_2
// valgrind --tool=callgrind ./Exercise_2

int main() {


  //initialisation
  std::default_random_engine generator;
  std::uniform_real_distribution<double> distribution(-1,1);

  unsigned int max = 100000000;
  unsigned int in_circle = 0;
  //main loop
  for (unsigned int i = 0; i < max; ++i) {
    double x = distribution(generator);
    double y = distribution(generator);
    double r = std::sqrt(x*x + y*y);
    if (r < 1) { 
      in_circle++;
    }
  }

  //output
  double pi = 4*in_circle/double(max);
  std::cout << pi << std::endl;

  return 0;

}
