#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n==1)   return false; 

    for (int i=2;i*i<=n;i++){
        if (n%i==0)    return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n))  cout<<"prime";
    else    cout<<"not prime";
    return 0;
}