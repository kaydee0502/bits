#include <stdio.h>


int main(){

int i,j,m,n,o,p,x,arr1[5][5],arr2[5][5],res[5][5];



printf("Enter the size of matrix 1\n");
scanf("%d %d",&m,&n);



printf("Enter the size of matrix 2\n");
scanf("%d %d",&o,&p);


res[5][5] = res[m][p];

if(n==o){

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
    res[i][j] = 0;
    }
    printf("\n");
}

printf("\n\nThe multiplication\n\n");

for(i=0;i<m;i++){
    for(j=0;j<p;j++){
     for(x=0;x<n;x++){
        res[i][j] += arr1[i][x]*arr2[x][j];

     }
    }
    printf("\n");
  }



for(i=0;i<m;i++){
    for(j=0;j<p;j++){

   printf("%d\t",res[i][j]);


    }
    printf("\n");
}


}

else{
    printf("\nmultiplication is not possible");
    }

return 0;
}

