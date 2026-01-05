#include<iostream>
#include<string>
using namespace std;
void duplicate(string str,string ans,bool map[26],int i){
    int n=str.length();
    if(i==n){
        cout<<ans<<" ";
        return;
    }
    int mapidx=str[i]-'a';
    if(map[mapidx]){
        duplicate(str,ans,map,i+1);
    }else{
        map[mapidx]=true;
        duplicate(str,ans+str[i],map,i+1);
    }
}
int main(){
    string str="appnacollege";
    string ans="";
    bool map[26]={false};
    duplicate(str,ans,map,0);
    return 0;
}