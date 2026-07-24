#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main () {
    long long  N;
    cin >> N;

    cin.ignore();

    string ho_ten;
    getline (cin, ho_ten);
    int L = ho_ten.length();
    double S = sqrt(abs(pow(N, 3) - L));
    
    cout << "Xin chào" << ho_ten << "!" << endl;
    cout << "Kết quả S = " << round (S) << endl;
    return 0;
}