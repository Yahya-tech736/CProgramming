#include <iostream>
#include <random>
#include <ctime>

int main(void) {
 std::random_device rd;

 std::mt19937 eng(rd());

 std::uniform_int_distribution<int> dist(1, 100);

 int i =1;
 while(i <100) {
  std::cout << dist(eng) << std::endl;
  i++;
 }

 // TODO: PRINT THE SUM AND AVERAGE OF THE RANDOM NUMBERS GENERATED

 std::cout << eng() << std::endl;
 return 0;
}