#include <iostream>
#include <vector>

using namespace std;

int positive_sum (const std::vector<int> arr){
  // Your code here
    // int res = 0;
    // for(int i=0 ; i < arr.size(); i++){
    //     arr[i]>0? res+=arr[i] : res+=0;
    // }
    // return res;

    // Alternative
    int result = 0;
    for(int number : arr) 
    {
        result += number > 0 ? number : 0;
    }
    return result;

    // Alternative 2
    // return std::accumulate(arr.begin(), arr.end(), 0, [](int a, int b) { return a + std::max(0, b); });
}

int main(){
    cout<<positive_sum(std::vector <int> {1,2,3,4,5})<<endl;
    cout<<positive_sum(std::vector <int> {1,-2,3,4,5});
    return 0;
}