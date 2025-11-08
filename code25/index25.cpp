//nextpermutation
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    string s = "abc";
    int index=-1;
    int n=s.size();
    for(int i=n-2;i>=0;i--){
        if(s[i]<s[i+1]){
int index=i;
            break;
        }}
        if(index==-1){
            reverse(s.begin(),s.end());
            cout<<s;
            return 0;
        
    }
    for(int j=n-1;j>index;j--){
        if(s[j]>s[index]){
            swap(s[j],s[index]);
            break;
        }
    }
    reverse(s.begin()+index+1,s.end());
    cout<<s;

}

