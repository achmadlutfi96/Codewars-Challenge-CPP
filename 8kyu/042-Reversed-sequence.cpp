#include <vector>
#include <iostream>
#include <numeric>

std::vector<int> reverseSeq(int n) {
  //your code here
    std::vector<int> res;
    for(int i = n; i > 0; i--){
        res.push_back(i);
    }
    return res;

    // Alternative
    // std::vector<int> seq(n);
    // std::iota(seq.rbegin(), seq.rend(), 1);
    // return seq;
}


int main(){
    for(auto a: reverseSeq(5)){
        std::cout<<a;
    }
    return 0;
}

