#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    char s[100] = "1";   
    char t[100];        

    for (int step = 2; step <= n; step++) {  
        int k = 0;        
        int i = 0;        
        int len = strlen(s);

        while (i < len) { 
            int j = i;    

           
            while (j < len && s[j] == s[i]) {
                j++;
            }

            int count = j - i;     
            t[k++] = count + '0';  
            t[k++] = s[i];         

            i = j;   }

        t[k] = '\0';    
        strcpy(s, t);    
    }

    printf("Count and Say term %d is: %s", n, s);

    return 0;
}