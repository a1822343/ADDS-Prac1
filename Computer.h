#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer: public Player{
 public:
  std::string getName();
  Move * makeMove();
  std::string name;
};
#endif