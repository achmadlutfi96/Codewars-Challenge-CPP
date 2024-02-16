#include <string>
#include <iostream>

int string_to_number(const std::string& s) {
  //your code here
  return stoi(s);
}

int main(){
    std::cout<<string_to_number("123456");
    return 0;
}