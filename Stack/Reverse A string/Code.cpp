#include<bits/stdc++.h>
using namespace std;

void rev(string s)
{
	std::stack<char> st;
	st.push('N');
	int l=s.length();
	string os;
	for(int i=0;i<l;i++)
	{
		st.push(s[i]);
	}
	while(st.top()!='N')
	{
		char c=st.top();
		st.pop();
		os += c;
	}
	cout<<os<<endl;
}
int main() 
{ 
    string exp = "Sahil Udayasingh"; 
    rev(exp); 
    return 0; 
} 
