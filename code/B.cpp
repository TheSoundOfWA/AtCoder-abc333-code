// User Name: JonathanLiu
// Link: https://atcoder.jp/contests/abc333/tasks/abc333_b

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  
  if (s == t) printf("Yes");
  else if ((s == "AB" || s == "BA" || s == "BC" || s == "CB" || s == "CD" || s == "DC" || s == "DE" || s == "ED" || s == "AE" || s == "EA") && (t == "AB" || t == "BA" || t == "BC" || t == "CB" || t == "CD" || t == "DC" || t == "DE" || t == "ED" || t == "AE" || t == "EA")) printf("Yes");
  else if ((s == "AC" || s == "CA" || s == "AD" || s == "DA" || s == "BD" || s == "DB" || s == "BE" || s == "EB" || s == "CE" || s == "EC") && (t == "AC" || t == "CA" || t == "AD" || t == "DA" || t == "BD" || t == "DB" || t == "BE" || t == "EB" || t == "CE" || t == "EC")) printf("Yes");
  else printf("No");
  
  return 0;
}
