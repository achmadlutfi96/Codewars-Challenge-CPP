#include <iostream>
#include <vector>
#include <string>


std::vector<int> digitize(unsigned long n) 
{   
    // ubah ke string     
    std::string numbers = std::to_string(n);
    std::vector<int> res;
    for(int i = numbers.size()-1; i>=0 ;i--){
        // ubah dari ascii character ke number dengan mengurangi dengan char '0'
        // dan push ke variabel res
        res.push_back((int)numbers[i]-'0'); 
    }
    return res;

    // alternative
    // std::vector<int> v;
    // std::string s = std::to_string(n);
    // std::reverse(s.begin(), s.end());
    // for (int i = 0; i < s.length(); i++) v.push_back(s[i]-'0');
    // return v;
}

int main(){
    std::vector<int> hasil = digitize(348597);

    for(int a: hasil){
        std::cout<<a<<std::endl;
    }

    return 0;
}