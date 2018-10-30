#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,t=0,l=0;
    scanf("%d",&n);
    char *s=malloc(sizeof(char)*n);
    for(int i=0;i<n;i++){
        scanf("%s",&s[i]);}
    for(int i=0;i<n;i++){
     if(t<1){
     if(s[i]=='U'){t++;}
         if(s[i]=='D'){t--;}
         if(t==0){l++;}}
         else{
         if(s[i]=='U'){t++;}
         if(s[i]=='D'){t--;}
         }}
        printf("%d",l);
    return 0;
}
