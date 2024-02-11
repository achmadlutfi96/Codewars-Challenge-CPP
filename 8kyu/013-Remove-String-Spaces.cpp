#include <string>
#include <iostream>

std::string no_space(const std::string& x)
{
    std::string res="";
    for(char s : x){
        if(s != ' '){
            res += s;
        }
    }
    return res;

    // alternative
    // x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
    // return x;
}

int main(){
    std::cout<<no_space("8 j 8   mBliB8g  imjB8B8  jl  B");
    return 0;
}