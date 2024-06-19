#include<bits/stdc++.h>
using namespace std;

int solve(int num, int power, int &result){
    while(power!=0){
        if(power%2==0){
            power/=2;
            num*=num;
        }
        else{
            power--;
            result*=num;
        }
    }
}

int main(){
    int power,num,result=1;
    cin>>num>>power;
    solve(num,power,result);
    cout<<result;
    return 0;
}