#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows and columns of pattern";
    cin>>r>>c;
    int count=1;
    int i=0;
    while(i<r){
        int j=1;
        while(j<=c){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}