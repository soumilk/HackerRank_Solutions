#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,gcd,lcm,count,k,min=100; 
    int m; 
    scanf("%d %d", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
    }
    for(int j=0;j<m;j++){
        if(b[j]<min){min=b[j];}
    }
    i=1;
    while(i<=b[0]){
        count=0;
        for(int j=0;j<m;j++){
            if(b[j]%i==0){count++;}
        }
    if(count==m){gcd=i;}
        i++;
    }
    
    i=1;
    for(int j=0;j<n;j++){
        i*=a[j];
    }k=a[0];
    while(k<=i){
      count=0;
        for(int j=0;j<n;j++){
            if(k%a[j]==0){count++;}
        }
        if(count==n){lcm=k;
                    break;}
        k++;
    }i=1;
    count=0;
    while((lcm*i)<=gcd){
        if((gcd%(lcm*i))==0){count++;}
        i++;
    }printf("%d",count);
    return 0;
}
