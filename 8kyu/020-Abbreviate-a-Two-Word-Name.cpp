#include <iostream>

using namespace std;

#include <string>
#include <cstring>

string abbrevName(string name)
{
    string abbrev = "";
    for(int i=0; i < name.size();i++){
        if(i == 0 || name[i-1] == ' '){
            if(i != 0){
                abbrev += ".";
            }
            abbrev += toupper(name[i]);
        } 
    }
    return abbrev;

    // alternative
    //   std::string ret;
    //   ret.push_back(toupper(name[0]));
    //   ret.push_back('.');
    //   ret.push_back(toupper(name[name.find(' ') + 1] ));
    //   return ret;
}

int main(){
    cout<<abbrevName("Sam Harris")<<endl;
    cout<<abbrevName("Patrick Feenan")<<endl;
    cout<<abbrevName("Evan Cole");
    return 0;
}