#include<bits/stdc++.h>
using namespace std;

int friends(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return (friends(n-1)+(n-1)*friends(n-2));
}
int main(){
    int n;
    cin>>n;

    cout<<friends(n);

    return 0;
}