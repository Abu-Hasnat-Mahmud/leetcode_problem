#include<bits/stdc++.h>
using namespace std;

  int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int l=0, r=0, result=0;
        
        while(r < s.size())
        {
        	while(charSet.find(s[r]) != charSet.end())
        	{        		
        		charSet.erase(s[l]);  
        		l++;      		
        	}
        	charSet.insert(s[r]);        		
        	result = max(result, r-l+1);        		
        	r++;
        }
       
        return result;
    }

int main(){

	string s;
	cin>>s;	
	cout<<lengthOfLongestSubstring(s);

	return 0;
}