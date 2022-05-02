//1.Binary to Octal Converter
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int binary2Octal(int bin){
  //binary to decimal
	int dec=0,oct=0,i=0;
	while (bin!= 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

  //decimal to octal conversion
	i=1;
	while(dec!=0){
		oct+=(dec%8)*i;
		dec/=8;
		i*=10;
	}
	return oct;
}

int main(){
	int n;cin>>n;
	cout<<binary2Octal(n)<<endl;
}


//2
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	int n;cin>>n;
	int ar[1000];
	for(int i=0;i<n;i++){
	    cin>>ar[i];
	}
	sort(ar,ar+n/2); 	//sort in ascending order
	sort(ar+n/2, ar + n, greater<int>()); 	//sort in descending order
	for(int i=0;i<n;i++){
	    cout<<ar[i]<<",";
	}
	
}

//3
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool checkPrime(int n){
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
	    int s=0;
	    int a,b;cin>>a>>b;
	    for(int i=a;i<=b;i++){
	        if(checkPrime(i)) s+=i;
	    }
	    cout<<s<<endl;
	}
	
	
}


//4.Remove duplicate character from a string
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
	string s;cin>>s;
	unordered_set<char>st;
	for(int i=0;i<s.length();i++){
	    st.insert(s[i]);
	}
	string ans="";
	for(auto x:st) ans+=x;
	for(char i=ans.length()-1;i>=0;i--) cout<<ans[i];
}


//5.
#include<bits/stdc++.h>
using namespace std;
double sum(int n)
{
    double i, s = 0;
    for (i = 1; i <= n; i++)
    s = s + 1/i;
    return s;
}
int main(){
	int n;cin>>n;
	cout<<fixed<<setprecision(2)<<sum(n)<<endl;
 }

