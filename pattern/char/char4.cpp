#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    int i=0;
    while(i<n){
         int j=0;
         while(j<=i){
            cout<<ch<<' ';
            j++;
         }
         cout<<endl;
         ch++;
         i++;
    }
    return 0;
}