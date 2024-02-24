#include <vector>
#include <iostream>
#include <string>

#include <numeric>
#include <algorithm>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    // go for it!
    int count = 0;
    int sum = 0;
    for(auto i : input){
        i > 0 ? count++ : sum+=i; 
    }
    if(count == 0 && sum==0) return {};
    return {count , sum};

    // Alternative
    // if (input.size() == 0) return {};
    // int count = std::count_if(input.begin(), input.end(), [](int x) { return x > 0; });
    // int sum = std::accumulate(input.begin(), input.end(), 0, [](int s, int x) { return x < 0 ? s + x : s; });
    // return {count, sum};
}

int main(){
    for(auto i : countPositivesSumNegatives({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15})){
        std::cout<<i;
    }
    return 0;
}