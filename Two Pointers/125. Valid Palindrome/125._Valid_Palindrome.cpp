#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
	int l=0;
	int r=s.length()-1;
	//cout<<l<<r<<endl;	
	//cout<<tolower(s[0])<<endl;
	//cout<<isalnum(s[1])<<endl;
	while(l<r){
		if(!isalnum(s[l])){					
			l++;
		}
		else if(!isalnum(s[r])){			
			r--;		
		}
		else if(tolower(s[l])!=tolower(s[r])) {						
			return false;
		}
		else{			
			l++;
			r--;
		}		
	}	
    return true;
}
int main(){
	string s;
	//cin>>s; cin can not input space
	getline(cin,s);
	//cout<<s;
	cout<<isPalindrome(s);
	return 0;
}