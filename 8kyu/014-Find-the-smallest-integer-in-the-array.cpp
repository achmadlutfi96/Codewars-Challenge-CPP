#include <iostream>
#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
   // Your Code is Here ... Hope you Enjoy 
  int min = list[0];

  for(int i: list){
    if(i < min) min=i;
  }

  return min;

  // alternative
  // return *std::min_element(list.begin(), list.end());
}

int main(){
    cout<<findSmallest({-12,-52,-27});
    return 0;
}