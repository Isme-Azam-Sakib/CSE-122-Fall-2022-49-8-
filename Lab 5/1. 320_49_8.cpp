//Codeforces problem no: 266A
// Problem name: Stones on the table
#include <iostream>
using namespace std;

int main(){
    int n, x=0, i;
    string s;
    cin >> n;
    cin >> s;
    for(i=0; i<n; i++){
        if(s[i]==s[i+1]){
            x++;
        }
    }
    cout << x <<endl;
    return 0;
}
