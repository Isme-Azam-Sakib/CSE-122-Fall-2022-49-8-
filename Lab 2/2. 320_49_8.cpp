//Codeforce problem no: 158A
//Problem name: next round
#include <iostream>
using namespace std;
int main()
{
    int n, k, i, scores[100], next=0;
    cin >> n >> k;
    for(i=0; i<n; i++){
        cin >> scores[i];
    }
    for(i=0; i<n; i++){
        if(scores[i]>=scores[k-1] && scores[i]>0){
            next++;
        }
    }
    cout<< next<<endl;
    return 0;
}
