#include<stdio.h>
#include<string.h>
int main(){
    int main(){
    char str[]="hello";
    int frq1[]={0};
    int frq2[]={0};
    int ln=strlen(str);
    char str2[]="lloeh";
    if(ln!=strlen(str2)){
        printf("Not Anagram");
        return 0;
    }
    for(int i=0;i<ln;i++){
        frq1[str[i]]++;
        frq2[str2[i]]++;
    }
    for(int i=0;i<256;i++){
        if(frq1[i]!=frq2[i]){
            printf("Not Anagram");
            return 0;
        }
    }
   
}   printf("Anagram");
    return 0;
}