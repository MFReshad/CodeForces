#include<bits/stdc++.h>
using namespace std;

int x, y, temp;

int main() {
   int t, b[100];
   char a[100];
   cin >> t;

   for (int i = 0; i < t; i++) {
      int n;
      cin >> n;
      x = 0, y = 0, temp = 0;

      for (int j = 0; j < n; j++) {
         cin >> a[j];
         switch (a[j]) {
            case 'U':
               x += 1;
               break;
            case 'D':
               x -= 1;
               break;
            case 'R':
               y += 1;
               break;
            case 'L':
               y -= 1;
               break;
         }
         if (x == 1 && y == 1) {
            temp = 1;
         }
      }
      if (temp) {
         b[i] = 1;
      } else {
         b[i] = 0;
      }
   }
   for (int i = 0; i < t; i++) {
      if (b[i] == 1) {
         cout << "YES\n";
      } else {
         cout << "NO\n";
      }
   }

   return 0;
}
