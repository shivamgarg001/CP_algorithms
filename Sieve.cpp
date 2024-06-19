#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<bool> vec(90000001, true);
vector<int> ans;

void pre_cal(){
    for (int i = 2; i <= 90000000; i++)
    {
        if (vec[i] == true){
            ans.push_back(i);
            for(int j=i*i;j<=90000001; j+=i)    vec[j]=false;
        }
    }
}

int32_t main(){
    int q;
    cin >> q;
    pre_cal();

    while (q--)
    {
        int n;
        cin >> n;
        cout << ans[n - 1] << endl;
    }

    return 0;
}

