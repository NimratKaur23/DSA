#include <iostream>
using namespace std;

bool isPossible(int arr[],int n,int M,int mid) {
	int heightsum=0;
	int diff=0;
	
	for(int i=0;i<n;i++) {
		if(arr[i]==mid || arr[i]<mid) {
			diff=0;
		}
		else {
		diff=arr[i]-mid;
		}
		
		heightsum=heightsum+diff;
	}
	
	if(heightsum>=M) {
		return true;
	}
	else {
		return false;
	}
}

int BinarySearch(int arr[],int n,int M) {
	int s=0;
	int sum=0;
	
	for(int i=0;i<n;i++) {
		sum+=arr[i];
	}
	
	int e=sum;
	int mid=s+(e-s)/2;
	int ans=-1;
	
	while(s<=e) {
		if(isPossible(arr,n,M,mid)) {
			ans=mid;
			s=mid+1;
		}
		else {
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main() {
	
	int arr[5]={4, 42, 40, 26, 46};
    int n=5;
	int M=20;
	int answer=BinarySearch(arr,n,M);

    cout<<"Height of machine is: "<<answer<<endl;

	return 0;
}