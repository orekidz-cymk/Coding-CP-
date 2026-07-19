#include <iostream>

using namespace std;

int main () {
    float T;
    cin >> T;

    if (T >= 9.0) {
        cout << "Very Toxic" << endl;
    }
    else if (T >= 5.0 && T <= 8.9) {
        cout << "Toxic" << endl; 
    }
    else if (T <= 5.0) {
        cout << "Safe" << endl;
    }
    else {
        cout << "Kết quả không hợp lệ" << endl;
    }
    return 0;
}
