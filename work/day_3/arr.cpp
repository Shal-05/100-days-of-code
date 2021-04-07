//HackerRank C++ array problem
//Problem statement in arr.md file
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n,q,k,i,j;
    cin>>n>>q;
    int **arr= new int*[n];
    for(int b=0; b<n; b++){
        cin>>k;
        arr[b]= new int[k];
        for(int a=0; a<k; a++){
            cin>>arr[b][a];
        }
    }
    for(int a=0; a<q;a++){
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
    return 0;
}
