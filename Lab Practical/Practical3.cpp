#include<iostream>
using namespace std;
#include<cctype>
#include<cmath>
#include<stack>


int evaluatePostfix(string postfix){
    stack<int>st;
  for(int i=0; i<postfix.size();i++){
    char ch = postfix[i];
    if(ch==' '){
        continue;
    }
    if(isdigit(ch)){
      st.push(ch -'0');
    }
    else{
        if (st.size() < 2) {   // ✅ check before popping
                cerr << "Invalid postfix expression!" << endl;
                return -1;
            }
      int val2 = st.top();
      st.pop();
      int val1 = st.top();
      st.pop();
      switch(ch){       
        case '+': st.push(val1+val2);
          break;
        case '-':st.push(val1-val2);
        break;
        case '*':st.push(val1*val2);
        break;
        case '/':st.push(val1/val2);
        break;
        case '^':st.push(pow(val1,val2));
        break;
      }
    }
  }
  return st.top();
}

int main(){
  string postfix;
  getline(cin,postfix);
//   cin>>postfix;
  cout<<evaluatePostfix(postfix);
}
