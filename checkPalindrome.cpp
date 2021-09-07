#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(char str[]){
	//int len=str.length();

	int l=0;
	int h=strlen(str)-1;
	while(h>l){
		if(str[l++] !=str[h--])
			return false;
	}
	return true;
}

int main()
{
 char str[]="abcdcda";
 char str1[]="ramram";

 if(ispalindrome(str))
 	cout<<"palindrome"<<endl;
 else
 	cout<<"not palindrome"<<endl;

 return 0;
}