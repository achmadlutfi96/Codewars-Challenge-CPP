#include <vector>
#include <iostream>
#include <numeric>

int grow(std::vector<int> nums) {
  // your code here
    int res = 1;
    for(int i : nums){
        res *= i;
    }
    return res;

    // Alternative
    // return std::accumulate(nums.cbegin(), nums.cend(), 1, std::multiplies<int>());
}

int main(){

    std::cout<<grow({1, 2, 3})<<std::endl;
    std::cout<<grow({4, 1, 1, 1, 4});
    return 0;
}