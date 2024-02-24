#include <string>
#include <iostream>

std::string bmi(double w, double h) 
{
    double res = w / (h*h);
    if(res <= 18.5){
        return "Underweight";
    } else if (res <= 25.0)
    {
        return "Normal";
    }else if (res <= 30.0)
    {
        return "Overweight";
    }else
    {
        return "Obese";
    }
    
}

int main(){
    std::cout<<bmi( 81.585, 2.1);
    return 0;
}