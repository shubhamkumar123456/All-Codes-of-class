#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int precedence(char op){
  if(op=='^'){
    return 3;
  }
  if(op=='*' || op=='/'){
    return 2;
  }
  if(op=='+' || op=='-'){
    return 1;
  }
  return 0;
}

string infixToPostFix(string infix){
  stack<char>st;
  string postFix = "";
  for(int i=0; i<infix.size();i++){
        char ch = infix[i];
        if(isalnum(ch)){
            postFix = postFix+ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                    postFix = postFix+st.top();
                    st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && st.top()!='(' && precedence(st.top()) > precedence(ch)){
                postFix+=st.top();
                st.pop();
            }
            st.push(ch);
        }
  }
  while(!st.empty()){
    postFix+= st.top();
    st.pop();
  }
  return postFix;
}


int main(){
 string infix;
 cin>>infix;
 
 string postfix = infixToPostFix(infix);
 cout<<postfix;

  
}