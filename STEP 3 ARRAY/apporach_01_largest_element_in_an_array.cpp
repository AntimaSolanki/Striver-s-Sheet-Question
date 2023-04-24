#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int>&v){
    sort(v.begin(),v.end());
    return v[v.size()-1];
}
int main(){
    vector<int>arr1={5,1,3,4,7};
    cout<<"Largest element "<<sortArr(arr1)<<endl;
    return 0;
}