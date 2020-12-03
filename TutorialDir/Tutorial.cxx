// A simple program that computes the square root of a number
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

#include "../TutorialConfig.h"
#include "MathFunctions.h"
int initial() { return 7; }
const int hello = 40 + initial();

int main(int argc, char *argv[])
{
  std::cout << "hello\n";
  argc += 2;
  std::cout << "argc" << argc << std::endl;
  argc += 2;
  std::cout << "argc" << argc << std::endl;
  std::cout << "hello\n";
  if (argc < 2) {
    //std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]);

  // calculate square root
  const double outputValue = mathfunctions::sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
  return 0;
}
