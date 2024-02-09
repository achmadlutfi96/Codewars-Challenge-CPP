#include <string>
#include <iostream>
#include <algorithm>

using namespace std ; 

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
//   string res = "";
//   for(int i = str.size()-1; i >= 0; i--){
//     res+=str[i];
//   }
//   return res;

    // Alternative
    std::reverse(str.begin(), str.end());
    return str; 
}

int main(){
    cout<<reverseString("hello");
    return 0;
}