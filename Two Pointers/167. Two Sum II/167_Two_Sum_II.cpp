#include<bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;

        int l=0, r=numbers.size()-1;

        while(l<r){
        	int sum=numbers[l]+numbers[r];
        	if(sum==target){
        		res.push_back(l+1);
        		res.push_back(r+1);
        		return res;
        	}
        	else if(sum<target){
        		l++;
        	}
        	else {
        		r--;
        	}
        }
        return res;

    }

int main(){
	int sizeOfInput=0,target=0;		
	cin>>target>>sizeOfInput;
	vector<int> numbers;
	for(int i=0; i<sizeOfInput; ++i){
		int num=0;
		cin>>num;
		numbers.push_back(num);
	}
	vector<int>result=twoSum(numbers,target);
	cout<<result[0]<<", "<<result[1]<<endl;

	return 0;
}