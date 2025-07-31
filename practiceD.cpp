#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; 
    vector<int> counts_of_twos(N);
    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A; // 定石
        int current_count = 0;
        while (A % 2 == 0) {
            A /= 2;
            current_count++;
        }
        counts_of_twos[i] = current_count;
    }
    int min_operations = counts_of_twos[0]; // 最初の要素で初期化
    for (int i = 1; i < N; ++i) {
        if (counts_of_twos[i] < min_operations) {
            min_operations = counts_of_twos[i];
        }
    }
    cout << min_operations << endl;
}