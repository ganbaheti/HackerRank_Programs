#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for (int i=0;i<=s.length();i++)
	{
		if(s[i]==s[i+1])
		{
		s=s.erase(i,2);
		i=-1;
		}
	}
	cout<<s;
	return 0;
}
