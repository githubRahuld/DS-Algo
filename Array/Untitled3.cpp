//binary search
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
	int st=0,end=n-1;
	
    while(st<=end){
    	int mid = (st+end)/2;
    		if(arr[mid] == key){
    			return mid;
			}else if(arr[mid]>key){
				end=mid-1;
			}else{
				st=mid+1;
			}
		}
	
 
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
	int key;
	cout<<"Enter the key: ";
	cin>>key;
	
	cout<<binarySearch(arr,n,key);
}
