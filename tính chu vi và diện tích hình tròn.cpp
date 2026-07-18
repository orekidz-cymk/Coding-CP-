#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    long long r;
    cin >> r;
    cout << "Chu vi hình tròn là: " << fixed << setprecision (2) << r * 2 * M_PI << endl;
    cout << "Diện tích hình tròn là: " << fixed << setprecision (2) << pow (r, 2) * M_PI << endl;


}