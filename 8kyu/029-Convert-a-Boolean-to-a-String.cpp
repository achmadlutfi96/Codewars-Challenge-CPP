#include <iostream>

#include <string>

std::string boolean_to_string(bool b){
  //Your code here
    return b ?"true" : "false";
}

int main(){
    std::cout<<boolean_to_string(true);
    return 0;
}