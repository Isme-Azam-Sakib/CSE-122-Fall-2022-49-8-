//Codeforce problem no: 231A
//Problem Name: Team

#include <iostream>

using namespace std;

int main()
{
    int n, i, a, b, c, ans=0, score=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b>> c;
        if(a>0 || b>0 || c>0){
            ans++;
            if(ans>=2){
                score++;
            }
        }
    }
    cout<< score;


    return 0;
}
