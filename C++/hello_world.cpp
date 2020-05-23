#include<iostream>
#include<cstring>
using namespace std;

void lol();

int main(){
    static int s = 1;
char *n = "kaydee";
cout << n << endl << *n << endl << &n << endl;
int i;
for(i=0;i<strlen(n);i++){
    cout << n[i] << endl;
}
while(s==1){
    s++;
    lol();
}

return 69;
}

void lol(){
    int g;
g = main();
cout << "dekh ye use h uss return ka " << g << endl;
}
