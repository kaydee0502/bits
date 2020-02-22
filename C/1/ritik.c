#include <stdio.h>

#define x 3

int main(){

int a[x][x],i,j;

for(i=0;i<x;i++){
    for(j=0;j<x;j++){

    scanf("%d",&a[i][j]);
    }
}

for(i=0;i<x;i++){
    for(j=0;j<x;j++){

    printf("%d\t",a[i][j]);
}
    printf("\n");
}



}
