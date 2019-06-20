#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
  int count1 = 0;
  int ca[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      cb[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i < a.length(); i++) {
    if (a[i] == 'a')
      ca[0] = ca[0] + 1;
    if (a[i] == 'b')
      ca[1] = ca[1] + 1;
    if (a[i] == 'c')
      ca[2] = ca[2] + 1;
    if (a[i] == 'd')
      ca[3] = ca[3] + 1;
    if (a[i] == 'e')
      ca[4] = ca[4] + 1;
    if (a[i] == 'f')
      ca[5] = ca[5] + 1;
    if (a[i] == 'g')
      ca[6] = ca[6] + 1;
    if (a[i] == 'h')
      ca[7] = ca[7] + 1;
    if (a[i] == 'i')
      ca[8] = ca[8] + 1;
    if (a[i] == 'j')
      ca[9] = ca[9] + 1;
    if (a[i] == 'k')
      ca[10] = ca[10] + 1;
    if (a[i] == 'l')
      ca[11] = ca[11] + 1;
    if (a[i] == 'm')
      ca[12] = ca[12] + 1;
    if (a[i] == 'n')
      ca[13] = ca[13] + 1;
    if (a[i] == 'o')
      ca[14] = ca[14] + 1;
    if (a[i] == 'p')
      ca[15] = ca[15] + 1;
    if (a[i] == 'q')
      ca[16] = ca[16] + 1;
    if (a[i] == 'r')
      ca[17] = ca[17] + 1;
    if (a[i] == 's')
      ca[18] = ca[18] + 1;
    if (a[i] == 't')
      ca[19] = ca[19] + 1;
    if (a[i] == 'u')
      ca[20] = ca[20] + 1;
    if (a[i] == 'v')
      ca[21] = ca[21] + 1;
    if (a[i] == 'w')
      ca[22] = ca[22] + 1;
    if (a[i] == 'x')
      ca[23] = ca[23] + 1;
    if (a[i] == 'y')
      ca[24] = ca[24] + 1;
    if (a[i] == 'z')
      ca[25] = ca[25] + 1;
  }

  for (int i = 0; i < b.length(); i++) {
    if (b[i] == 'a')
      cb[0] = cb[0] + 1;
    if (b[i] == 'b')
      cb[1] = cb[1] + 1;
    if (b[i] == 'c')
      cb[2] = cb[2] + 1;
    if (b[i] == 'd')
      cb[3] = cb[3] + 1;
    if (b[i] == 'e')
      cb[4] = cb[4] + 1;
    if (b[i] == 'f')
      cb[5] = cb[5] + 1;
    if (b[i] == 'g')
      cb[6] = cb[6] + 1;
    if (b[i] == 'h')
      cb[7] = cb[7] + 1;
    if (b[i] == 'i')
      cb[8] = cb[8] + 1;
    if (b[i] == 'j')
      cb[9] = cb[9] + 1;
    if (b[i] == 'k')
      cb[10] = cb[10] + 1;
    if (b[i] == 'l')
      cb[11] = cb[11] + 1;
    if (b[i] == 'm')
      cb[12] = cb[12] + 1;
    if (b[i] == 'n')
      cb[13] = cb[13] + 1;
    if (b[i] == 'o')
      cb[14] = cb[14] + 1;
    if (b[i] == 'p')
      cb[15] = cb[15] + 1;
    if (b[i] == 'q')
      cb[16] = cb[16] + 1;
    if (b[i] == 'r')
      cb[17] = cb[17] + 1;
    if (b[i] == 's')
      cb[18] = cb[18] + 1;
    if (b[i] == 't')
      cb[19] = cb[19] + 1;
    if (b[i] == 'u')
      cb[20] = cb[20] + 1;
    if (b[i] == 'v')
      cb[21] = cb[21] + 1;
    if (b[i] == 'w')
      cb[22] = cb[22] + 1;
    if (b[i] == 'x')
      cb[23] = cb[23] + 1;
    if (b[i] == 'y')
      cb[24] = cb[24] + 1;
    if (b[i] == 'z')
      cb[25] = cb[25] + 1;
  }

  for (int i = 0; i < 26; i++) {
    if (ca[i] > cb[i])
      count1 = count1 + (ca[i] - cb[i]);
    else if (ca[i] < cb[i])
      count1 = count1 + (cb[i] - ca[i]); }

  return count1;
}

  int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
