#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int sum=0;
  for(bool i : arr){
    if(i) sum++;
  }
  return sum;

  // alternative
  //return count(arr.begin(), arr.end(), true);
}

int main(){
    cout<<count_sheep({ true,  true,  true,  false,
                                  true,  true,  true,  true ,
                                  true,  false, true,  false,
                                  true,  false, false, true ,
                                  true,  true,  true,  true ,
                                  false, false, true,  true });
    return 0;
}
