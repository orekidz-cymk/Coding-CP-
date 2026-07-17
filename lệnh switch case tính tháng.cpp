#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
   int thang;
   cin >> thang;
    switch (thang) {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
        cout << "Vậy tháng có 31 ngày " << endl;
        break;
        case 4 : case 6 : case 9 : case 11:
        cout << "Vậy tháng có 30 ngày" << endl;
        break;
        default:
        cout << "không hợp lệ!" << endl;
    }
   return 0;
}
