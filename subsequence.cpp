#include<iostream>
#include<string>
using namespace std;

void subsequence(string ip,string op){
//base case
if(ip.size()==0){
    cout<<op<<endl;
    return;
}
string op1=op;
string op2=op;

op2.push_back(ip[0]);
ip.erase(ip.begin()+0);

// hypotheis
subsequence(ip,op2);
subsequence(ip,op1);



}
int main(){
    string s="abc";
    string op="";
    subsequence(s,op);
    return 0;
}