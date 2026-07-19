#include <iostream>
#include <tuple>

using namespace std;

int main () {
    int a, b , c, x, y, z;
    if (cin >> a >> b >> c >> x >> y >> z) {
        bool nguoi_1_lon_hon = tie (a, b, c) < tie (x, y, z);
        cout << (nguoi_1_lon_hon ? 1 : 2);
    }
    return 0;
}
