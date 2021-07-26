/*
* Problem Name: Power of two
* Problem Number: 1095/C
* OJ: Codeforces
*/

#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() {
    int n, k;
    cin >> n >> k;

    priority_queue < int > pqq;

    for(int i = 0; i < 31; i++) {
        int p = 1 << i;
        if((n & p) > 0) {
            pqq.push(p);
            k--;
        }
    }
    while(k > 0) {
        int a = pqq.top();
        pqq.pop();
        if(a == 1) break;
        a = a / 2;
        pqq.push(a);
        pqq.push(a);
        k--;
    }
    if(k == 0) {
        cout << "YES" << endl;
        while(pqq.empty() == 0) {
            int a = pqq.top();
            pqq.pop();
            cout << a << " ";
        }
        cout << endl;
    }
    else 
        cout << "NO" << endl;
    return 0;
}