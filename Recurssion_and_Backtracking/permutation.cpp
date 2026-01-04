#include<iostream>
#include<string>
using namespace std;
void permutation(string str,string ans){
int n=str.length();
if(n==0){
    cout<<ans<<" ";
    return;
}
for(int i=0;i<n;i++){
    char ch=str[i];
    string new_str=str.substr(0,i)+str.substr(i+1,n-i-1);
    permutation(new_str,ans+ch);
} 
}
int main(){
    string str="abc";
    permutation(str,"");
    return 0;
}