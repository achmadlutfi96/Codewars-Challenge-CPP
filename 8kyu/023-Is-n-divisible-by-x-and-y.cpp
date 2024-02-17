#include <iostream>

using namespace std;

bool isDivisible(int n, int x, int y) {
  // your code here
  return n%x==0 && n%y==0;
}

int main(){
    cout<<isDivisible(3, 3, 4);
    return 0;
}