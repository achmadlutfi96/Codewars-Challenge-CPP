#include <iostream>
#include <string>

using namespace std;

string bool_to_word(bool value)
{
  return value ? "Yes" : "No";
}

int main(){
    cout<<bool_to_word(true);
    return 0;
}