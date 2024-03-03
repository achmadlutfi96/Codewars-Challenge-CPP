#include <string>
#include <iostream>

std::string countSheep(int number) {
    // your code here
    std::string res;
    for(int i = 1; i <= number; i++){
        res+= std::to_string(i) +" sheep...";
    }
    return res;
}

int main(){
  std::cout<<countSheep(3);
  return 0;
}