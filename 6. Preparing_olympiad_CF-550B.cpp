#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector < int > arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    for(int mask = 0; mask < (1 << n); mask++) {
        int sum = 0; 
        int Min = INT_MAX;
        int Max = INT_MIN;
        for(int i = 0; i < n; i++) {
            if((mask & (1 << i)) > 0) {
                Min = min(Min, arr[i]);
                Max = max(Max, arr[i]);
                sum += arr[i];
            }
        }
        if(sum >= l && sum <= r && Max - Min >= x) count++;
    }
    cout << count << endl;

    return 0;
}