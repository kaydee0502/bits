#include <stdio.h>

int main(){

int v,kmap[4][4],inp[31],r,c,i;

printf("enter the number of variables\n");
scanf("%d",&v);

if(v==1){
    r = 1;
    c = 1;
    }

if(v==2){
    r = 2;
    c = 2;
}
if(v==3){
    r = 2;
    c = 4;
}
if(v==4){
    r = 4;
    c = 4;
}
printf("enter marked position, input with \"n\" when done\n");

for(i=0;i<=31;++i){
    scanf("%d",inp[i]);
    if(inp[i]=='n')
        break;
}

printf("done");

}
