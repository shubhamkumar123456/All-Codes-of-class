// Evaluate postfix expression code
#include<iostream>
#include<stack>
#include<sstream>
#include<cmath>
using namespace std;

int evaluatePostfix(string postfix){
  stack<int>st;
  stringstream ss(postfix);
  string token;
  while(ss>>token){
    if(isdigit(token[0]) || (token.size() > 1 && token[0]=='-')){
      st.push(stoi(token));
    }
    else{
      int val2 = st.top();
      st.pop();
      int val1 = st.top();
      st.pop();
      int result = 0;
      
      if(token=="+"){
        result = val1+val2;
      }
      else if(token=="-"){
        result = val1-val2;
      }
      else if(token =="*"){
        result = val1*val2;
      }
      else if(token =="/"){
        result = val1/val2;
      }
      else if(token =="^"){
        result = pow(val1,val2);
        }
      
      st.push(result);
    }
  }
  return st.top();
}

int main(){
  string postfix;
  getline(cin,postfix);
  cout<<evaluatePostfix(postfix)<<endl;
  return 0;
}