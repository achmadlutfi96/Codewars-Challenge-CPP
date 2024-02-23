#include <iostream>
#include <vector>
#include <numeric>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  // your code here
    // fungsi accumulate adalah fungsi iterator penjumlahan
    return accumulate(classPoints.begin(), classPoints.end(), 0.0)/classPoints.size() < yourPoints;
}

int main(){
    using vec = std::vector<int>;
    std::cout<<betterThanAverage(vec{2, 3}, 5);
    return 0;
}