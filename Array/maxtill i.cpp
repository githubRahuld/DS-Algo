#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[i];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int mx = INT_MIN;
	for(int i=0;i<n;i++){
		mx = max(mx,arr[i]);
		cout<<mx<<" ";
	}
}
