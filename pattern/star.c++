#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    int p=n;
    while(p>0){
        int j=p;
        while(j>0){
            cout<<"*";
            j--;
        }
        
        cout<<endl;
        p--;
    }
    return 0;
}