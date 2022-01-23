#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// HELPER FUNCTION

void display_vec(vector<int> &v){
    cout<<"Size "<<v.size()<<endl;
    cout<<"================"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // PAIRS

    pair<int,string> p;
    p=make_pair(1,"anu");
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> p2;
    p2={3,"veev"};
    cout<<p2.first<<" "<<p2.second<<endl;
    
    pair<int,string> &p3= p;
    p3.second = "huihui";
    cout<<p.first<<" "<<p.second<<endl;

    // ARRAY OF PAIRS

    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};

    swap(p_array[1],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    // VECTORS

    vector<int> v;
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        v.push_back(num); //O(1) time complexity
        display_vec(v);
    }

    return 0;
}

