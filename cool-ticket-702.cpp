/*Code đếm chữ*/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main () {
    //Tối ưu tốc độ xử lí
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline (cin, s);

    //
    string clean_s = "";
    for (int i = 0; i < (int)s.length(); i++) {
        if (isalpha(i)) {
            clean_s += tolower(s[i]); //
        }
    }

    bool isPalindrome = true;
    int n = (int)clean_s.length();

    for (int i = 0; i < n / 2; i++) {
            //
            if (clean_s[i] != clean_s[n - 1 - i]) {
                isPalindrome = false;
                break;
            }
    }

    if (isPalindrome) {
        cout << "Yes" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}