#include<bits/stdc++.h>
using namespace std;

#define ll long long

void print(vector<ll int> data){
    for(ll int i=0;i<data.size();i++)    cout<<data[i]<<endl;
}

ll int solve(){
    ll int n;
    cin>>n;
    ll int arr[n];
    for(ll int i=0;i<n;i++)    cin>>arr[i];

    ll int ans = 0;

    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<"prime factor of "<<n<<" are: "<<endl;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int count=1;
            n/=i;
            while(n%i==0){
                count++;
                n/=i;
            }
            cout<<i<<"^"<<count<<endl;
        }
    }
    if(n>1) cout<<n<<"^"<<1;
    return 0;
}