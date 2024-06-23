#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string st;
        cin >> st;

        int total_time = 0;
        int solved_problems = 0;

        for (int i = 0; i < n; i++) {
            int problem_time = st[i] - 'A' + 1;
            total_time += problem_time;

            if (total_time <= i + 1) {
                solved_problems++;
            } else {
                break;  // No need to continue checking if Monocarp can't solve more problems
            }
        }

        cout << solved_problems << endl;
    }

    return 0;
}
