//Q.Find the subarry sum which is equal to the given sum using 2 pointer
#include<iostream>
using namespace std;
int main()
{
	
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int S=5; //can be user input
	
	int i=0, j=0, st=-1, end=-1, sum=0;
	while(j<n && sum+a[j] <= S){
		sum+=a[j];
		j++;
	}
	//after while loop sum should we equal to S or greater than S so 
	//for sum =to S 
	if(sum == S){
		cout<<i+1<<" "<<j<<endl;
		return 0;
	}
	
	//sum is more than sum
	while(j<n){
		sum += a[j];
		while(sum>S)
		{
			sum-=a[i];
			i++;
		}
		if(sum == S){
			st = i+1;
			end = j+1;
			break;
		}
		j++;
	}
	cout<<st<<" "<<end<<endl;
}
