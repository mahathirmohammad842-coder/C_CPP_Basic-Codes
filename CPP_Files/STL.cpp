#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>arr={1,2,3,4,1};
map<int,int>m;


for(int i=0;i<arr.size();i++){
    m[arr[i]]++;

    if(m[arr[i]]==2){
        cout<<"Repeated :"<<arr[i];
        break;
    }
}


return 0;
}
