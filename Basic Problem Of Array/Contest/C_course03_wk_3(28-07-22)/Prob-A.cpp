#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    for(int i = 0 ; i<4; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0 ; i<4;i++)
    {
        if(arr[i]>=10){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}