#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
char toUpper(char ch){
    return('A'+(ch-'a'));
}
void permuataionCase(string ip,string op){
    //base case
    if(ip.length()==0){
        cout<<op<<endl;
        return;
    }
   string op1=op;
   string op2=op;
   //Decison 1 - remain smallcase
   op1.push_back(ip[0]);
   //Decision 2- make upper case
   op2.push_back(toUpper(ip[0]));
   ip.erase(ip.begin()+0);

   permuataionCase(ip,op1);
   permuataionCase(ip,op2);
   return;


}
int main(){
    string ip="ab";
  
    string op="";

    permuataionCase(ip,op);
    return 0;
}