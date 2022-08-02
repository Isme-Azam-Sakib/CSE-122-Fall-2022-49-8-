// Problem no: 282A
// Problem name: Bit++

#include <iostream>

using namespace std;

int main()
{
    int n,i,positive=0, negative=0;
    char str[100];
    cin >> n;
    for (i=0; i<n; i++){
        cin >> str;
        if(str[0]=='+' || str[1]=='+'){
            positive++;
        }
    }
    negative=n-positive;

    cout <<positive-negative<< endl;

    return 0;
}
