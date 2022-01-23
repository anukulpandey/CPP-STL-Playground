#include<iostream>
using namespace std;

int main(){
    int * num ;
    num = new int;

    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<*num<<endl;
    int n;
    cin>>n;

    int * arr = new int[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}