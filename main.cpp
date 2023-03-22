#include <iostream>
#include <cmath>

using namespace std;

void quadraticFormula(double a, double b, double c)
{
    double discriminant = b*b - 4*a*c;
    if (discriminant < 0) {
        cout << "No real roots" << endl;
    } else {
        double x1 = (-b + sqrt(discriminant)) / (2*a);
        double x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}

int main()
{
    double a, b, c;
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;
    quadraticFormula(a, b, c);
    return 0;
}