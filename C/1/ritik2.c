#include <stdio.h>


int main(){

int a[2][3],b[3][2],i,j;

for(i=0;i<2;i++){
    for(j=0;j<3;j++){

    scanf("%d",&a[i][j]);


    }
}


for(i=0;i<2;i++){
    for(j=0;j<3;j++){

    printf("%d\t",a[i][j]);


    }
    printf("\n");
}



for(i=0;i<2;i++){
    for(j=0;j<3;j++){

    b[j][i]=a[i][j];


    }
    printf("\n");
}


for(i=0;i<3;i++){
    for(j=0;j<2;j++){


    printf("%d\t",b[i][j]);


    }
    printf("\n");
}




}
