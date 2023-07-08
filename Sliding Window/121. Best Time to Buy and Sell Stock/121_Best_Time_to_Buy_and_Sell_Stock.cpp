#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
	int l=0,r=1;
	int maxP=0;

	while(r<prices.size()){
		if(prices[l]<prices[r]){
			int profit=prices[r]-prices[l];
			maxP=max(maxP,profit);
		}
		else{
			l=r;
		}
		++r;
	}
	return maxP;
}

int main(){
	int sizeOfInput=0;		
	cin>>sizeOfInput;
	vector<int> numbers;
	for(int i=0; i<sizeOfInput; ++i){
		int num=0;
		cin>>num;
		numbers.push_back(num);
	}
	
	cout<<maxProfit(numbers);

	return 0;
}