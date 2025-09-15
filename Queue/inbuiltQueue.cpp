#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(50);
    q.push(70);
    q.push(80);
    q.pop();
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    
    while(!q.empty()){
        cout << q.front() << " ";  // print first element
        q.pop();                   // remove it
    }
    cout << endl;
}