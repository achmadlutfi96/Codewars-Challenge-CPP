#include <vector>
#include <iostream>

std::vector<int> countBy(int x,int n){
    std::vector<int> res;
    for(int i = 1; i <= n; i++){
        res.push_back(i*x);
    }
    return res;
}

int main(){
    for(auto i : countBy(1,10)){
        std::cout<<i;
    }
    
    return 0;
}