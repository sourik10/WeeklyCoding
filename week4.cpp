//1.Goldsbach Conjecture
//https://www.youtube.com/watch?v=4IKqUZCqiMc
//https://www.geeksforgeeks.org/check-number-can-written-sum-k-prime-numbers/

#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
bool check(int n){
	if(n==0 || n==1) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		if(n < 2*k) cout<<"no"<<endl;
		else{
			if(k==1){
				if(check(n)) cout<<"yes"<<endl;
				else cout<<"no"<<endl;
			}

			else if(k==2){
				if(n%2){
					if(check(n-2)) cout<<"yes"<<endl;
					else cout<<"no"<<endl;
				}
				else cout<<"yes"<<endl;
			}

			else cout<<"yes"<<endl; //k>=3
		}
	}
}


//2.Rearrange an array in order – smallest, largest, 2nd smallest, 2nd largest
//https://www.geeksforgeeks.org/rearrange-array-order-smallest-largest-2nd-smallest-2nd-largest/
//time = Time Complexity : O(n Log n) 
//Auxiliary Space : O(n)

#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
void rearrange(int*ar,int n){
	int temp[1000];
	sort(ar,ar+n);
	int arIndex=0;
	for(int i=0,j=n-1;i<=n/2||j>n/2;i++,j--){
		temp[arIndex]=ar[i];
		arIndex++;
		temp[arIndex]=ar[j];
		arIndex++;
	}
	for(int i=0;i<n;i++){
		ar[i]=temp[i];
	}
}
int main(){
	int n;cin>>n;
	int ar[1000];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	rearrange(ar,n);
	for(int i=0;i<n;i++){
		cout<<ar[i]<<",";
	}

}


//3
