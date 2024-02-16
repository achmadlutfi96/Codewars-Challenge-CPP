#include <iostream>

using namespace std;

int basicOp(char op, int val1, int val2) {
  // Your code here
    switch (op)
    {
    case '+':
        return val1+val2;
    case '-':
        return val1-val2;
    case '*':
        return val1*val2;
    case '/':
        return val1/val2;
    }
}

int main(){
    cout<<basicOp('+',5,4);
    return 0;
}