#include <vector>
#include <iostream>
#include <numeric>

int sum(std::vector<int> nums) {
  // your code here
    return accumulate(nums.begin(), nums.end(), 0);
}

int main(){
    std::cout<<sum(std::vector<int>{1, 2, 3, 4});
    return 0;
}