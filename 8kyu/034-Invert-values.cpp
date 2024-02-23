#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> invert(std::vector<int> values)
{
    std::vector<int> res;
    for (int i : values)
    {
        res.push_back(-i);
    }
    return res;
    // Alternative
    // transform(values.begin(), values.end(), values.begin(), std::negate<int>());;
    // return values;
}

int main(){
    for (auto i : invert({1, 2, -3, 4, 5}))
    {
        std::cout<<i;
    }
    return 0;
}