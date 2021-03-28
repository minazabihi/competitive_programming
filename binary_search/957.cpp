#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y,n,v;
    while(cin >> y){
        cin >> n;
        vector<int> list;
        for(int i=0;i<n;i++){
            cin >> v;
            list.push_back(v);
        }
        int max=0, start=0, end=0;
        for(int i=0;i<list.size();i++){
            auto upper = upper_bound(list.begin()+i,list.end(),list[i]+y-1);
            int numPopes = upper-(list.begin()+i);
            if(numPopes > max){
                max = numPopes;
                start = list[i];
                end = *(upper-1);
            }
        }
        cout<<max<<" "<<start<<" "<<end<<endl;
    }
    return 0;
}
