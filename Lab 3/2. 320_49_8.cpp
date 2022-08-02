//Codeforces problem no: 263A
//Problem name: Beautiful Matrix

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int mat[5][5], i , j, m, n;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin >> mat[i][j];
            if(mat[i][j]==1){
                m=abs(i-2); n=abs(j-2);
            }
        }
    }
    cout << m+n << endl;
    return 0;
}
