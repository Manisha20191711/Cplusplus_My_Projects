#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

int dsum =0, usum=0,cval=0,step=0;
int med[n];
for(int i=0;i<n;i++)
{
  if (s[i] == 'D') {
    step--; 
    
  }
  if (s[i] == 'U') {
  step++;
  }
      med[i] = step;  
}
for(int i=0;i<n;i++)
 { if((i==(n-1)) && (med[i]<0))
   {
    cval++;
  }
  else if (med[i] < 0 && med[i + 1] == 0)
    cval++;
 }
 return cval;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
