#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int res = 0;
    if (S[0] == '1') ++res;
    if (S[1] == '1') ++res;
    if (S[2] == '1') ++res;
    cout << res << endl;
}