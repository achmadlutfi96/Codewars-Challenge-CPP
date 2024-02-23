#include <iostream>

using namespace std;

int simpleMultiplication(int a){
    //Your code
    return a%2==0 ? a*8 : a*9;
}

int main(){
    cout<<simpleMultiplication(8);
    return 0;
}