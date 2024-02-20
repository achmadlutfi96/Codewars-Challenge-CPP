#include <iostream>

using namespace std;

bool lovefunc(int f1, int f2) {
  return f1%2==0 != f2%2==0;

  // Alternative
  // return (a + b) % 2;
  // Or
    //   return f1 % 2 != f2 % 2;
}

int main(){
    cout<<lovefunc(1, 2);
    return 0;
}