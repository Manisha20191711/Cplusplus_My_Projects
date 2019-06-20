#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
  int i ;
  long count = 0;
   k = s.length();
 long q = n / k;
  long r = n % k;
  for (i = 0; i < k; i++) {
    if (s[i] == 'a') {
      count++;
    }
  }
  count = q * count;
  for (i = 0; i < r; i++) {
    if (s[i] == 'a') {
      count++;
    }
  }
  return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
