#include <bits/c++config.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

typedef vector<vector<int>> Matrix;
typedef vector<int> Row;

Matrix m;

int main() {
    int a,b,len,i,j,x,z,val;
    cin >> a >> b;
    for(i=0;i<a;i++){
        Row row;

        cin >> len;
        for(int j=0;j<len;j++){
            cin >> val;
            row.push_back(val);
        }
        //row={5,5,5,5,5,5};
        m.push_back(row);

    }
    for (j=0;j<b;j++){
        cin >> x >> z;
        cout << m[x][z];
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
