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


//3.Series of Fibonacci and Prime numbers | 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17,
#include<stdio.h>
#define MAX 1000
void fibonacci(int n)
{
 int i, term1 = 0, term2 = 1, nextTerm;
 for (i = 1; i<=n; i++)
 {
  nextTerm = term1 + term2;
  term1 = term2;
  term2 = nextTerm;
 }
 printf("%d", term1);
}

void prime(int n)
{
 int i, j, flag, count =0;
 for (i=2; i<=MAX; i++){
  flag = 0;
  for (j=2; j<i; j++)
  {
   if(i%j == 0)
   {
    flag = 1;
    break;
   }
  }
  if (flag == 0)
   count++;
  if(count == n)
  {
   printf("%d", i);
   break;
  }
 }
}
int main( )
{
 int n;
 scanf("%d", &n);
 if(n%2 == 1)
  fibonacci (n/2 + 1);
 else
  prime(n/2);
 return 0;
}



//4.String reverse using recursion.
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
void reverse(string &str, int l, int h)
{
    if (l < h)
    {
        swap(str[l], str[h]);
        reverse(str, l + 1, h - 1);
    }
}
 
int main(){
    string str;
    getline(cin,str);
    reverse(str, 0, str.length() - 1);
    cout << str;
    return 0;
}


//5.Check palindrome
#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
//check palindrome
bool checkPal(string line){
    int l=0,h=line.size()-1;
    while(l<h){
    	if(line[l++]!=line[h--]){
    		return false;
    	}
    	
    }
    return true;
  }
int main(){
    string line;
    string temp = "";
    getline(cin, line);

    //remove special character from the string
    for (int i = 0; i < line.size(); ++i) {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            temp = temp + line[i];
        }
    }
    line = temp;
    cout<<line<<endl;
    //lowercase to uppercase
    for(char &ch:line){
            if(ch>='a' && ch<='z') ch-=32;
        }
	/*
	//uppercase to lowercase
    	for(char &ch:line){
            if(ch>='A' && ch<='Z') ch+=32;
        }
  	*/  
    cout<<line<<endl;
    //palindrome check in string
    if(checkPal(line)) cout<<"palindrome"<<endl;
    else cout<<"not palindrome"<<endl;

}




