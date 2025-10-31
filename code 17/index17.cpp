//merge two sorted array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1[]={1,3,5,7};
    int n=4;
    int a2[]={0,2,6,8,9};
    int m=5;
    int right=0;
    int left=n-1;
    while(left>0 && right<=m){
        if(a1[left]>a2[right]){
            int temp=a1[left];
            a1[left]=a2[right];
            a2[right]=temp;
            left--,right++;
        }
        else
        break;
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
    for(int i=0;i<n;i++){
        cout<<a1[i];
    }
    for(int i=0;i<m;i++){
        cout<<a2[i];
    }
    
}
