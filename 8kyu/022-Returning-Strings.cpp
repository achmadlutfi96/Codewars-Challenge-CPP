#include <iostream>

#include <string>

std::string greet(const std::string& n){
  //your code here
  return "Hello, "+n+" how are you doing today?";
}

int main(){
    std::cout<<greet("Ryan");
    return 0;
}