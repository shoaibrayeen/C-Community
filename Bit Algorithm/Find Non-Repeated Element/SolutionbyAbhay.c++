#include <bits/stdc++.h>
using namespace std;
int nonRepeated(vector<int> &v){
	int x=v[0];
	for(int i=1;i<v.size();i++){
		x^=v[i];
	}
	return x;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> v1;
	for(int i=0;i<n;i++){
		int number;
		cin>>number;
		v1.push_back(number);
	}
	cout<<nonRepeated(v1)<<endl;
	return 0;
}