#include<string.h>
#include<stdio.h>
int main(){
    char str[]="hello";
    int n=strlen(str);
    int i=0;
    if(str[i]==str[n-i-1]){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}