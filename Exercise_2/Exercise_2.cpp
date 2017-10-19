#include <random>
#include <iostream>
#include <chrono>
#include <cmath>

// Calculate value of pi using Monte Carlo integration
// Points within circle of radius 1 inscribed in 2x2 square in ratio pi/4
// Monte Carlo integration converges to correct answer (slowly!)
// Compile with
// g++ Exercise_2.cpp -std=c++14 -OX -g -o Exercise_2
// or
// clang++ Exercise_2.cpp -std=c++14 -OX -g -o Exercise_2
// where X goes from 0 to 3
// For older compilers, replace c++14 with c++11 or c++0x
// Time and profile your output
// time ./Exercise_2
// valgrind --tool=callgrind ./Exercise_2


//Linear congruential random number generator
//Recurrence relation x_m_plus_1 = (a*x_m + c) % m
//Generates numbers between 0 and m
unsigned int random_LCG(unsigned int x_m) {
  unsigned int a = 1103515245; 
  unsigned int m = 2147483647; //2**31 - 1
  unsigned int c = 1013904223; 
  unsigned int x_m_plus_1 = (a*x_m + c) % m;
  return x_m_plus_1;
}

int main() {


  //initialisation
  unsigned int max = 100000000;
  unsigned int in_circle = 0;
  //main loop
  unsigned int x_num = 42;//Seed values for x and y
  unsigned int y_num = random_LCG(x_num);
  unsigned int denom = 2147483647;
  for (unsigned int i = 0; i < max; ++i) {
    x_num = random_LCG(x_num);
    y_num = random_LCG(y_num);
    double x = x_num/double(denom);
    double y = y_num/double(denom);
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
