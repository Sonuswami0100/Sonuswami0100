#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool palindrome(string str,int n){
    int st = 0,end = n - 1;
    bool ans = false;
    while(st < end){
        if(str[st] == str[end]){
            ans = true;
            st++;
            end--;
        }else{
            ans = false;
            st++;
            end--;
        }
    }
    if(ans){
        return true;
    }else{
        return false;
    }
}

int main(){
    string str = "madam";
    int n = str.size();
    if(palindrome(str,n)){
        cout<<"Is palindrome"<<endl;
    }else{
        cout<<"Not palindrome";
    }
}