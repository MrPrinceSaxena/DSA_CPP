#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        char ch='A'+i;
        int j=0;
        while(j<=i){
            cout<<ch<<' ';
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}