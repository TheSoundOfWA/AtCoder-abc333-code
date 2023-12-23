// User Name: JonathanLiu
// Link: https://atcoder.jp/contests/abc333/tasks/abc333_c

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n;
  scanf("%d", &n);
  
  int a = 0, b = 0, c = 0;
  bool f = false;
  for (int i = 1; i <= 12; i++) {
    a++;
    for (int j = 1; j <= a; j++) {
      b++;
      for (int k = 1; k <= b; k++) {
        c++;
        if ((--n) == 0) {
          f = true;
          break;
        }
      }
      if (f) break;
      c = 0;
    }
    if (f) break;
    b = 0, c = 0;
  }
  
  ll A = 0, B = 0, C = 0;
  for (int i = 1; i <= a; i++) A = A * 10 + 1;
  for (int i = 1; i <= b; i++) B = B * 10 + 1;
  for (int i = 1; i <= c; i++) C = C * 10 + 1;
  printf("%lld", A + B + C);
  
  return 0;
}
