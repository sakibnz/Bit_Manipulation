#include<bits/stdc++.h>
using namespace std;

int main() {
    long long x, cnt = 0;
    cin >> x;

    while(x) {
        x = x & (x-1);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
