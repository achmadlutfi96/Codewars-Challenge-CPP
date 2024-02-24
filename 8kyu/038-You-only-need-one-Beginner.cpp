#include <vector>
#include <string>
#include <iostream>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    bool check = false;
    for(auto i : seq){
        if( i == elem ) check=true;
    }
    return check;

    // Best Practice
    // for(auto i:seq) if(i==elem)return 1;
    // return 0;

    // Alternative
    // return std::find(seq.begin(), seq.end(), elem) != seq.end();
}

int main(){
    std::cout<<check({ },               "a")<<std::endl;
    std::cout<<check({ "a", "b", "c"},  "b");
    return 0;
}