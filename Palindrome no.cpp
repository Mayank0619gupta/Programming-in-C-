#include<iostream>
using namespace std;
int main(){
    int x, rev=0,original;
    cout<<"Enter the number to check"<<endl;
    cin>>x;
    original = x;
    while(x>0){
        int digit = x % 10;
        rev = rev*10+digit;
        x=x/10;
    }
    if(original == rev){
        cout<<"Yes it's a palindrome number"<<endl;
    }else{
        cout<<"No it is not a palindrome number"<<endl;
    }
    return 0;
}
