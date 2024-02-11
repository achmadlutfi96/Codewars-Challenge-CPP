#include <iostream>
#include <string>

using namespace std;

string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
//   string res;
//   for(int i = 0; i < str.length(); i++){
//     if(i == 0 || i == str.length()-1){
//         continue;
//     }
//     res += str[i];
//   }
//   return res;
    return str.substr(1, str.size() - 2);
}

int main(){
    cout<<sliceString("tuna");
    return 0;
}