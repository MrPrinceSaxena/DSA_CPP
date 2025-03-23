#include<iostream>
using namespace std;
   int reverseNumber(int num) {
   int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        reversedNum = reversedNum * 10 + digit; // Append it to the reversed number
        num /= 10; // Remove the last digit
    }
    
    return reversedNum;
}
int main(){
    int num;
    cin>>num;
    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;
    
    return 0;
}