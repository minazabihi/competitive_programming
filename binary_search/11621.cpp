#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, i, j;
    vector<long long> v;
    for(i = 0; i < 32; i++) {
        for(j = 0; j < 32; j++) {
            double p = pow(2,i)*pow(3,j);
            v.push_back(p);
            if(p <= (1LL<<31)) {
                v.push_back(p);
            }
        }
    }
    sort(v.begin(), v.end());
    while(cin>>n && n){
        cout<<*lower_bound(v.begin(), v.end(), n)<<endl;
    }
    return 0;
}
