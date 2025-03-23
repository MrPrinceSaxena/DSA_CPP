#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        char ch='A'+i;
        int j=0;
        while(j<n){ 
        cout<<ch<<" ";
        ch++;
        j++;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}