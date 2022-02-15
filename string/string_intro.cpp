#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
  string str;
  getline(cin,str);
  cout<<str<<endl;
  
  string s1 = "fam";
  string s2 = "ily";

  // cout<<s1.append(s2)<<endl;;
  cout<<s1+s2<<endl;

  //clear function
  string s3= "sahfaheufn.ksn fk s skfhwe";
   s3.clear();
   cout<<s3<<endl;

//compare function
//if it is equal then 0 will display , greater then  1 display ,otherwise -1 display
cout<<s2.compare(s1)<<endl;

//erase function
string s4 ="harry potter";
s4.erase(6,2);
cout<<s4<<endl;

//find
cout<<s4.find("rry")<<endl;

//insert
s4.insert(5,"lol");
cout<<s4<<endl;

//lenght/size
cout<<s4.length()<<endl;

//numeric string to integer function
string s5 ="100";
cout<<stoi(s5)<<endl;

//integer to string
int x =33;
cout<<to_string(x)+"2"<<endl;

//sort function
//first  include<algorithm>
 
 string s6 = "sjhfahfeybvjkasb ";
 sort(s6.begin(),s6.end());
 cout<<s6<<endl;

}