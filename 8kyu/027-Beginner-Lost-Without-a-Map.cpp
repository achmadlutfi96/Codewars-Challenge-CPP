#include <iostream>
#include <vector>

std::vector<int> maps(const std::vector<int> &values) {
    std::vector<int> res;
    for(auto i = values.begin() ; i!=values.end(); ++i){
        res.push_back(*i + *i);
    }
    return res;

    // Alternative
    // std::vector<int> result;
    // for(auto a:values)
    //     {
    //         result.push_back(a*2);
    //     }   

    //     return result;
}

int main(){
    auto res = maps({1,2,3});
    for (auto &i : res)
    {
        std::cout<<i;
    }
    return 0;
}