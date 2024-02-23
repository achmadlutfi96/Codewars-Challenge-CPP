#include <iostream>
#include <numeric>
#include <vector>

double calcAverage(const std::vector<int>& values){
  // your code
  double res=0;
  for (int i = 0; i < values.size(); i++)
  {
        /* code */
        res += values[i];
  }
  return res/values.size();

    // Alternative
    // return accumulate(values.begin(),values.end(), 0.0) / values.size();
}

int main(){
    std::cout<<calcAverage({2,5});
    return 0;
}