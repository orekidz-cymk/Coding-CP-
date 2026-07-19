#include <iostream>

using namespace std;

int main () {
    unsigned int n;
    cin >> n;
    long long S_n = 1ll * n * (n + 1) / 2;
    cout << S_n << endl;
    return 0;
}