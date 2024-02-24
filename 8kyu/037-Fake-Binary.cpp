#include <string>
#include <iostream>
#include <cstring>

std::string fakeBin(std::string str){
  //your code here
  std::string res;
  for(int i: str){
        i-'0' < 5? res.push_back('0') : res.push_back('1');
  }
  return res;

  // Alternative
  // std::transform(str.begin(), str.end(), str.begin(), [](auto ch) {return ch < '5' ? '0' : '1';});
  // return str;
}

int main(){
    std::cout<<fakeBin("15889923");
    return 0;
}