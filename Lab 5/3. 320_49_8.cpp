//Codeforces problem no: 546A
//Problem name: Soldier and banana
#include <iostream>
using namespace std;

int main(){
    int k, b, n, i, cost=0 ;
    cin >> k >> n >> b;

    for(i=1; i<=b ; i++){
        cost=cost+i;
    }
    if(cost*k<n){
        cout << "0" <<endl;
    } else {
        cout << (cost*k)-n << endl;
    }


    return 0;
}
