#include<iostream>
using namespace std;
int main(){
    int rows=0,n;
    cin>>n;
    while(rows<=n){
        int col=1;
        while(col<=rows){
            cout<<"*";
            col++;
        }
        cout<<endl;
        rows++;
    }
    return 0;
}