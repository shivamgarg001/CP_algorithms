#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=1;
    }
    arr[0]=arr[1]=0;
    for (int i=2;i*i<=n;i++)
    {
        if (arr[i] == 1){
            cout<<i<<" ";
            for(int j=i*i;j<=n; j+=i)    arr[j]=0;
        }
    }
    return 0;
}