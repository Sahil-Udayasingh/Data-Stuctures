#include<bits/stdc++.h>
using namespace std;

int balanced(string s)
{
	std::stack<char> st;
	int l=s.length();
	char x;
	
	for(int i=0;i<l;i++)
	{
		if(s[i]=='{'||s[i]=='['||s[i]=='(')
		{
		st.push(s[i]);
		} 
		 if (st.empty()) 
           return false; 
           
         switch (s[i]) 
        { 
        case ')': 
  
            x = st.top(); 
            st.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
             
            x = st.top(); 
            st.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
  
             
            x = st.top(); 
            st.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        }   
	}
	return (st.empty()); 
}
int main() 
{ 
    int n;
    string expr;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>expr;
    
    if (balanced(expr)) 
        cout << "YES\n"; 
    else
        cout << "NO\n";
    
    }
    return 0;
} 
