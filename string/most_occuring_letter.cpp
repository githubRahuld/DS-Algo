#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string  s = "aaabbbbccccccddddddddd";
    
    int check[26];
    for(int i=0;i<26;i++){
        check[i] = 0;
    }
    for(int i=0;i<s.size();i++){
        check[s[i]-'a']++;  //thing to remember
    }
    int maxword = 0; //store length
    char ans = 'a'; //store character

    for(int i=0;i<26;i++){
        if(check[i]>maxword){
        maxword = check[i];
        ans = i+'a';
        }
        
    }
    cout<<maxword<<endl;
    cout<<ans<<endl;
}