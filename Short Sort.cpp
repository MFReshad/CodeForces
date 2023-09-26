#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "abc" || s == "acb" || s == "cba" || s == "bac")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
