#include <iostream>

using namespace std;

int makeNegative(int num)
{
  // return num>0 ? -num : num;

  // alternative
  return -abs(num);
}

int main(){
    cout<<makeNegative(42)<<"\n";
    cout<<makeNegative(-42)<<"\n";
    cout<<makeNegative(0);
    return 0;
}