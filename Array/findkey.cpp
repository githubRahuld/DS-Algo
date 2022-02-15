#include<iostream>
using namespace std;
int  foundKey(int arr[],int n,int key){
	bool found = false;
	int i;
	for(int i=0;i<5;i++){
		if(arr[i] == key){
     	found = true;
     	 return i;
     	break;
		}	
	}
	cout<<"key is not found"<<endl;
   return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// int arr[5] = {3 ,543,2,15,7};
	int key =15;
	cout<<foundKey(arr,5,key);
	

	
	


}
