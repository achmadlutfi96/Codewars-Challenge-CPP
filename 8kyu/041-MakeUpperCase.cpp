#include <string>
#include <iostream>
#include <cctype>

std::string makeUpperCase (const std::string& input_str)
{
    std::string res;
    for(auto a: input_str){
        res.push_back(toupper(a));
    }
    return res;
}

int main(){
    std::cout<<makeUpperCase("hello");
    return 0;
}