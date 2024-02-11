#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int square_sum(const vector<int>& numbers)
{
    int res = 0;
    for(int n : numbers){
        res += (n*n);
    }
    return res;

    // alternative
    // return std::accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) {return a + b * b;});
}

int main(){
    cout<<square_sum({1, 2});
    return 0;
}