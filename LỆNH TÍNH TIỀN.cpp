#include <iostream>

using namespace std;

int main () {
    int so_cay;
    cin >> so_cay;
    if (so_cay <= 10) {
        double tong_tien_tra = so_cay * 5000;
        cout << "Vậy tổng số tiền người đó phải trả là: " << tong_tien_tra << " VND " << endl;
    }
    else if (10 <= so_cay <= 50) {
        double so_tien_phai_tra = so_cay * 4500;
        cout << "Vậy tổng số tiền người đó phải trả là: " << so_tien_phai_tra << " VND " << endl;
    }
    else {
        double phai_tra = so_cay * 4000;
        cout << "Vậy tổng số tiền người đó phải trả là: " << phai_tra << " VND " << endl;
    }
    return 0;
}