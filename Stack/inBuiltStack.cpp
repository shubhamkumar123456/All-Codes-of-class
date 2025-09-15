#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(40);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}