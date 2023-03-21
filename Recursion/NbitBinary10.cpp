//have to create n digit binary number s.that at any prefix the no. of ones >=no. of zeros


void solve(int zero,int one,int n,string op,vector<string>&ans){
    //base condition
    if(n==0){
        ans.push_back(op);
        return;
    }
    //D1 
    if(zero<one){
        //can include zero
        string op1=op;
        string op2=op;
        op1.push_back('1');
        op2.push_back('0');
        
        
        solve(zero,one+1,n-1,op1,ans);
        solve(zero+1,one,n-1,op2,ans);
    }
    if(one==zero){
        string op1=op;
        op1.push_back('1');
        solve(zero,one+1,n-1,op1,ans);
    }
    return;
    
}
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string>ans;
	    string op="";
	    int one=0;
	    int zero=0;
	    solve(zero,one,N,op,ans);
	    return ans;
	}
