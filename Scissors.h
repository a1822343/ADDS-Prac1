#ifndef SCISSORS
#define SCISSORS
#include <vector>

#include "Move.h"

class Scissors : public Move {
 private:
  std::string name;
  std::vector<std::string> winsAgainst;

 public:
  Scissors();
  std::string getName();
  std::vector<std::string> getWins();
};
#endif