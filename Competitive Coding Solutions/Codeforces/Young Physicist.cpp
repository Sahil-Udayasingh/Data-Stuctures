    #include <iostream>
    using namespace std;
     
    int main() {
    	int n,a,b,c,sum,aa=0,bb=0,cc=0;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    	    cin>>a>>b>>c;
    	    aa=aa+a;
    	    bb=bb+b;
    	    cc=cc+c;
    	}
    	if(aa==0&&bb==0&&cc==0)
    	cout<<"YES";
    	else
    	cout<<"NO";
    }
