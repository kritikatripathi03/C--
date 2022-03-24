#include<bits/stdc++.h>
using namespace std;
string reverse(string s, int len){
    for(int i=0,j=len-1;i<len/2;i++,j++){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}

void allpossiblepal(string s,int st, int e){
    if(s<e){
        if(s.length()==0)
        return;
        if(s.length()==1)
        cout<<s<<endl;
        if(s==reverse(s,e+1))
        cout<<s<<endl;;
    }
    allpossiblepal(s.substr(1),st++,e--);
}

int main(){
    string s;
    getline(cin,s);
    allpossiblepal(s,0,s.length()-1);
}