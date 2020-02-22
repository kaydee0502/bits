#include <stdio.h>


int main(){

int i,j,m,n,o,p,arr1[5][5],arr2[5][5],res[5][5];



printf("Enter the size of matrix 1\n");
scanf("%d %d",&m,&n);

arr1[5][5] = arr1[m][n];

printf("Enter the size of matrix 2\n");
scanf("%d %d",&o,&p);

arr2[5][5] = arr2[o][p];


if(m==o&&n==p){

printf("\nEnter the 1st matrix\n");

for(i=0;i<m;i++){
    for(j=0;j<n;j++){

    scanf("%d",&arr1[i][j]);

    }
}

printf("\n");

for(i=0;i<m;i++){
    for(j=0;j<n;j++){

    printf("%d\t",arr1[i][j]);

    }
    printf("\n");
}




printf("\nEnter the 2nd matrix\n");

for(i=0;i<o;i++){
    for(j=0;j<p;j++){

    scanf("%d",&arr2[i][j]);

    }
}

printf("\n");

for(i=0;i<o;i++){
    for(j=0;j<p;j++){

    printf("%d\t",arr2[i][j]);

    }
    printf("\n");
}

printf("\n\nThe sum\n\n");

for(i=0;i<m;i++){
    for(j=0;j<p;j++){

    res[i][j]= arr1[i][j]+arr2[i][j];
   printf("%d\t",res[i][j]);
    }
    printf("\n");
}

}
else{
    printf("\naddition is not possible");
    }
return 0;
}
