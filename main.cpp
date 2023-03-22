#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class quadEqSolver{
    private:
        double a;
        double b;
        double c;

        std::vector<double> sol{0,0};
    public:
        quadEqSolver(double par1, double par2, double par3){
            this->a = par1;
            this->b = par2;
            this->c = par3;
        };
        ~quadEqSolver() {};
        std::vector<double> quadSolver();
};

std::vector<double> quadEqSolver:: quadSolver() {
        double discriminant = b*b - 4*a*c;
        if (discriminant < 0) {
            cout << "No real roots" << endl;
        } else if (discriminant == 0)
        {
            auto x1 = -b/(2*a);
            auto x2 = x1;
            this->sol[0] = x1;
            this->sol[1] = x2;
        }
        else
        {
            double x1 = (-b + sqrt(discriminant)) / (2*a);
            double x2 = (-b - sqrt(discriminant)) / (2*a);
            this->sol[0] = x1;
            this->sol[1] = x2;
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        return sol;
    }

int main()
{
    double a, b, c;
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;
    quadEqSolver solquad(a, b, c);
    auto result = solquad.quadSolver();
    std::cout << "First solution x1: " << result[0] << std::endl;
    std::cout << "Second solution x2: " << result[1] << std::endl;
    return 0;
}