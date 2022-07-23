//Codeforce problem no - 71A
//Problem Name- Way too long

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n, len, i;
    char word[150];

    cout<<"Enter how many words to enter:"<<endl;
    cin>>n;

    for(i=0;i<n;i++){
    cin>>word;
    len=strlen(word);
    if(len>10)
        cout<<word[0]<<len-2<<word[len-1]<<endl;
    else
        cout<<word<<endl;
    }
    return 0;
}
