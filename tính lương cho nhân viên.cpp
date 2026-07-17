#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    char ca_lam_viec;
    int so_san_pham;
    double so_nam_kinh_nghiem;
    bool chuyen_can;

    long long luong_co_ban;
    double he_so_kinh_nghiem;
    double thuong_chuyen_can;
    double tong_luong_thuc_nhan;
    bool nhan_vien_xuat_sac;

    cout << "=== Nhập thông tin nhân viên ===" << endl;

    cout << "1. Nhập ca làm việc (S: Sáng, C: Chiều, T:Tối): " << endl;
    cin >> ca_lam_viec;
    
    cout << "2. Nhập số sản phẩm làm được: " << endl;
    cin >> so_san_pham;
    
    cout << "3. Nhập số năm kinh nghiệm: " << endl;
    cin >> so_nam_kinh_nghiem;

    cout << "4.Đạt chỉ tiêu chuyên cần không? (nhập 1 nếu có, 0 nếu không): " << endl;
    cin >> chuyen_can;

    luong_co_ban = (long long)so_san_pham * 150000;

    if (so_nam_kinh_nghiem >= 2.0) {
        he_so_kinh_nghiem = 1.2;
    } else {
        he_so_kinh_nghiem = 1.0;
    }

    if (chuyen_can == 1 && ca_lam_viec == 'T') {
        thuong_chuyen_can = 1500000.50;
    } else {
        thuong_chuyen_can = 0.0;
    }

    tong_luong_thuc_nhan = (luong_co_ban * he_so_kinh_nghiem) + thuong_chuyen_can;

    nhan_vien_xuat_sac = (so_san_pham >= 100) && (ca_lam_viec == 'T' || chuyen_can == 1);

    cout << "=== Kết quả hiển thị ===" << endl;

    cout << "Tổng lương thực nhận: " << fixed << setprecision (2) << tong_luong_thuc_nhan << " VND " << endl;

    cout << "Nhân viên xuất sắc (1: Có, 2: Không): " << nhan_vien_xuat_sac << endl;

    return 0;
}
