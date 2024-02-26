#include <iostream>

bool hero(int bullets, int dragons) {
  return bullets>=dragons*2;
}

int main(){

    std::cout<<hero(1500, 751);
    return 0;
}