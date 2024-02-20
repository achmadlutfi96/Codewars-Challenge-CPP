#include <iostream>

using namespace std;

int past(int h, int m, int s) {
  // your code here
  return ((h*3600)+(m*60)+(s*1))*1000;
  
  // Alternative
  // return 1000*(s + m*60 + h*60*60);
}

int main(){
    cout<<past(0, 1, 1)<<endl;
    cout<<past(1, 1, 1);
    return 0;
}