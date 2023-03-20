#include<iostream>
#include<cmath>

using namespace std;
void solveQuadEquation(float a, float b, float c){
    auto discriminant  = b*b -4*a*c;
    if (discriminant < 0){
        std::cout << "No solution" << std::endl;
    }
    else if (discriminant == 0){
       auto root1 = -b/(2*a);
       auto root2 = root1;
    }
    else{
        auto root1 = (-b + sqrt(discriminant)) / (2*a);
        auto root2 = (-b - sqrt(discriminant)) / (2*a);
    }
}

int main(){
    float a = 1;
    float b = 4;
    float c = 2;
    solveQuadEquation(a, b, c);
    std::cout << "Solved" << std::endl;
    return 0;
}