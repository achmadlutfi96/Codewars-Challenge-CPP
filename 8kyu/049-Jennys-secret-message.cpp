#include <iostream>
#include <string>

std::string greet(std::string name) 
{
    if(name == "Johnny") {
        return "Hello, my love!";
    }
    return "Hello, " + name + "!";
}

int main(){
    std::cout<<greet("Johnny");
    return 0;
}