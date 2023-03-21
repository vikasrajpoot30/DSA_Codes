#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op){

//base condition for recusrion 
if(ip.length()==0){
    cout<<op<<" ";
    return ;
}
//recurive tree induction
string op1=op;
string op2=op;
//Decsion 1- include with spaces 
op1.push_back(' ');
op1.push_back(ip[0]);
//Decision 2-inlcude without spaces 
op2.push_back(ip[0]);
//update ip string
ip.erase(ip.begin()+0);
//hypotheis
solve(ip,op1);
cout<<endl;
solve(ip,op2);
return;

}
int main(){
    string ip="ABC";
  
    string op="";
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    solve(ip,op);
    return 0;
}