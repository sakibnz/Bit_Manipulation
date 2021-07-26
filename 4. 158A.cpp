#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    vector < int > arr;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
        if(a > 0 && i < k) count++;
        if(i >= k && arr[i]==arr[k-1] && a > 0) count++;
    }
    cout << count << endl;
}