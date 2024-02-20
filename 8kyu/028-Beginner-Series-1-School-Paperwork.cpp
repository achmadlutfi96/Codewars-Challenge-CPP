#include <iostream>

using namespace std;

int paperwork(int n, int m){
    return n>0 && m>0 ? n*m : 0;
}

int main(){
    cout<<paperwork(5,5)<<endl;
    cout<<paperwork(5,-5);
    return 0;
}