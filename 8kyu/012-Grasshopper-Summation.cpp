#include <iostream>

using namespace std;

int summation(int num){
 //Code Here
    int sum=0;
    for(int i=1; i<=num; i++){
        sum+=i;
    }
    return sum;

    // alternative
    // return num*(num+1)/2;
}

int main(){
    cout<<summation(8);
    return 0;
}