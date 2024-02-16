#include <iostream>

using namespace std;

int basicOp(char op, int val1, int val2) {
  // Your code here
    int res = 0;
    switch (op)
    {
    case '+':
        res=val1+val2;break;
    case '-' :
        res=val1-val2;break;
    case '*':
        res=val1*val2;break;
    case '/':
        res=val1/val2;break;
    }
    return res;
}

int main(){
    cout<<basicOp('+',5,4);
    return 0;
}