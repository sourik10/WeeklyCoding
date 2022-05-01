//1.Sum of digits
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int s=0;
	while(n>0){
		int m=n%10;
		s+=m;
		n/=10;
	}
	cout<<s<<endl;
}


//2.Check perfect number
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int s=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			s+=i;
		}
	}
	if(s==n)cout<<"perfect"<<endl;
	else cout<<"not perfect"<<endl;
}


//3
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int t=0;
	for(int i=0;i<n;i++){
		cout<<char(65+t)<<char(77+t)<<char(77+t)<<",";
		t+=2;
	}
}


//4
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int t=0;
	for(int i=0;i<n;i++){
		cout<<char(65+t)<<char(66+t)<<char(65+t)<<",";
		t++;
	}
}


//5
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int c=0;
	while(n!=0){
		c++;
		n/=10;
	}
	cout<<c<<endl;
}


//6.Reverse
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int t=n;
	int rev=0;
	while(n>0){
		rev=10*rev+(n%10);
		n/=10;
	}
	cout<<rev<<endl;
}


//7.Check Palindrome
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int t=n;
	int rev=0;
	while(n>0){
		rev=10*rev+(n%10);
		n/=10;
	}
	if(t==rev) cout<<"palindrome"<<endl;
	else cout<<"not palindrome"<<endl;
}


//8
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int flag=0;
	if(n==0 || n==1) flag=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0) cout<<"prime number"<<endl;
	else cout<<"not a prime number"<<endl;
	
}

//9
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool check(int n){
	if(n==0 || n==1) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}
int main(){
	int n;cin>>n;
	int s=0;
	for(int i=2;i<=n;i++){
		if(check(i)){s+=i;}
	}
	cout<<s<<endl;
	
}

//10
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int count(int n){
	int ct=0;
	while(n!=0){
		ct++;
		n/=10;
	}
	return ct;
}
int rev(int n){
	int r=0;
	while(n){
		r=(r*10)+n%10;
		n/=10;
	}
	return r;
}

int main(){
	int n,i=0;cin>>n;
	int t=rev(n);
	int digit=count(n);
	while(i<digit){
		cout<<char(65+i)<<t%10<<",";
		t/=10;
		i++;
	}
	
}


//11
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}

int main(){
	int a,b;cin>>a>>b;
	cout<<gcd(a,b)<<","<<lcm(a,b)<<endl;
	
}


//12
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool check(int n){
	if(n==0 || n==1) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}

int main(){
	int s1,s2;
	cin>>s1>>s2;
	for(int i=s1;i<=s2;i++){
		if(check(i)){
			cout<<i<<",";
		}
	}
	
}


//13
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int t=n,rem,res=0;
	while(n){
		rem=n%10;
		res+=(rem*rem*rem);
		n/=10;
	}
	if(res==t) cout<<"Armstrong"<<endl;
	else cout<<"not armstrong"<<endl;
}

//14
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
bool check(int n){
	int t=n,rem,res=0;
	while(n){
		rem=n%10;
		res+=(rem*rem*rem);
		n/=10;
	}
	if(res==t) return true;
	else return false;
}
int main(){
	int a,b;cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(check(i)) cout<<i<<",";
	}
}


//15
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0) cout<<i<<",";
	}
}

//18
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int sum(int n){
	if(n==0) return 0;
	return n+sum(n-1);
}
int main(){
	int n;cin>>n;
	cout<<sum(n)<<endl;
}


//19
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int fact(int n){
	if(n==0 || n==1) return 1;
	return n*fact(n-1);
}
int main(){
	int n;cin>>n;
	cout<<fact(n)<<endl;
}


//20.GCD using recursion
int gcd(int a, int b){
	if(b==0)
		return a;

	return gcd(b, a % b);
}


