//Codeforces problem no: 791A
//Problem name: Bear and big brothers
#include <iostream>
using namespace std;

int main(){
    int lim, bob, i;
    cin >> lim >> bob;
    if(lim<=bob){
        for(i=1; lim<=bob; i++){
            lim*=3;
            bob*=2;
            if(lim>bob)
                break;
        }
        cout << i << endl;
    } else {
        cout << "Lima is already bigger" << endl;
    }
    return 0;
}
