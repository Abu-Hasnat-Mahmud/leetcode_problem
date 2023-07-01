#include<bits/stdc++.h>
using namespace std;

 int maxArea(vector<int>& height) {
        int area=0;

        int l=0, r=height.size()-1;

        while(l<r){
        	int minHeight = min(height[l],height[r]);
        	area = max(area,(r-l)*minHeight);

        	if(height[l]<height[r])
        		l++;
        	else
        		r--;
        }
        return area;
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
	int result=maxArea(numbers);
	cout<<result<<endl;

	return 0;
}