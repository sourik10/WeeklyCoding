//1
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cout<<2*i<<","<<i<<",";
	}
}

//2
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int power(int a,int b){
	int res=1;
	if(b==0) return res;
	if(b%2){
		res=a*power(a,b/2)*power(a,b/2);
	}
	else res=power(a,b/2)*power(a,b/2);
	return res;
}
int main(){
	int b,x;
	cin>>b>>x;
	cout<<power(b,x)<<endl;  
}

//3
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n; cin>>n;
	cout<<n*(n+1)/2<<endl;
   
}

//4
//5
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cout<<pow(i,2)<<",";
	}
}


//6
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cout<<pow(2,i)<<",";
	}
}

//7
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int res=7;
	int i=0;
	while(i<n){
		cout<<res<<",";
		if(i%2==0) res+=3;
		else
			res-=2;
		i++;
	}
}

//8
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
    int res=1;
    for(int i=0;i<n;i++){
        res+=i;
        cout<<res<<",";
    }
}


//9
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
    int i=0;
    while(i++<n){
        cout<<4*i- 3<<","<<4*i- 3<<",";
    }
}


//10
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
    int i=0;
    while(i<n){
        cout<<"21,"<<9+(2*i++)<<",";
    }
}

//11
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
    int i=0,t=14;
    while(i++<n){
        cout<<t<<","<<2*t<<",";
        t=2*t-8;
    }
}

//12
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
    int i=0;
    while(i<n){
        cout<<char(65+i)<<pow(2,i)<<",";
        i++;
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
    int i=0;
    while(i<n){
       cout<<char(65+i)<<++i<<",";
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
    int i=0;
    while(i<n){
       cout<<"BC"<<char(65+i)<<++i<<",";
    }
}



