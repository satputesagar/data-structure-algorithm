#include<bits/stdc++.h>
#include<string>
using namespace std;


// Time complexity : O(N)
// Space complexity : O(1)
int findDistance(string str) {
	int start = 0;
	int end = 0;

	int distance = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[start] == str[end]) 
			if (distance < (end - start)) 
				distance = (end - start);
				start = i;
			}
		end++;
	
	return distance;
}
int main() {
	string str;//="abcabcabc";
	//cin>>str;
	getline(cin,str);
	cout<<str;
	cout << "String is : " << str << endl;
	cout << "Distance : " << findDistance(str) << endl;
	return 0;
}