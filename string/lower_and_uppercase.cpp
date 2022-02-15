#include<iostream>
// #include<string>
// #include<algorithm>

using namespace std;
int main()
{
    //convert lowercase to upper case
    string s ="suhfuiehruibjksnfl";
    for(int i=0;i<s.length();i++){
        if(s[i] >='a' && s[i] <='z'){
            s[i] -= 32;
        }
    }
    cout<<s<<endl;

    //convert uppercase to lower case
    string s2 ="WIKKIPEDIA";
    for(int i=0;i<s2.length();i++){
        if(s2[i] >='A' && s2[i] <='Z'){
            s2[i] += 32;
        }
    }
    cout<<s2<<endl;

}