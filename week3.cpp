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
