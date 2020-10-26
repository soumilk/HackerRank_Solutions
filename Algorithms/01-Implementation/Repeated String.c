#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n,t=0,p,r,g=0; 
    scanf("%ld",&n);
    int len =strlen(s);
    p=n/len;
    r=n%len;
    for(long i=0;i<len;i++){
        if(s[i]=='a'){t++;}
    }t=t*p;
    for(long i=0;i<r;i++){
        if(s[i]=='a'){g++;}
    }
    printf("%ld",t+g);
    return 0;
}
