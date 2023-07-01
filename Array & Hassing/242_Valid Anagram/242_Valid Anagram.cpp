#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for(int i=0;i<s.length(); ++i){
        	sMap[s[i]] = 1 + sMap[s[i]];
        	tMap[t[i]] = 1 + tMap[t[i]];
        }        

         for (auto a : sMap){
         	if(a.second != tMap[a.first])
         		return false;
         }



return true;
    }

int main()
{
	string s,t;
	cin>>s>>t;
	cout<<isAnagram(s,t);
	return 0;
}

// Complexity
// O(r-l)