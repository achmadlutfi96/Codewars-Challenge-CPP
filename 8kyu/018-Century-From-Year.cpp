#include <iostream>

using namespace std;

int centuryFromYear(int year) 
{
    return year%100 > 0 ? (year/100)+1 : year/100;
}

int main(){
    cout<< centuryFromYear(1900)<<endl;
    cout<< centuryFromYear(1705)<<endl;
    cout<< centuryFromYear(1601);
    return 0;
}