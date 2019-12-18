#include<bits/stdc++.h>
using namespace std;

int evaluate(string s)
{
	std::stack<char> st;
	int l=s.length();
	
	for(int i=0;i<l;i++)
	{
		if(isdigit(s[i]))
		//if(s[i]>='0'&&s[i]<='9')
		{
		st.push(s[i]);
		}
		else
		{
			int a=st.top();
			st.pop();
			int b=st.top();
			st.pop();
			switch(s[i])
			{
			case '+': st.push(a+b); break;  
            case '-': st.push(a-b); break;
            case '*': st.push(a*b); break;
            case '/': st.push(a/b); break;
			}
		}
	}
	return st.top();
}
int main()  
{  
    string exp = "82+";  
    cout<<"postfix evaluation: "<< evaluate(exp);  
    return 0;  
}  