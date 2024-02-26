#include <iostream>
#include <cstdint>

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
  // TODO
  return distance_to_pump <= mpg*fuel_left; 
}

int main(){
    std::cout<<zero_fuel(50, 25, 2); 
    std::cout<<zero_fuel(100, 50, 1);    
    return 0;
}