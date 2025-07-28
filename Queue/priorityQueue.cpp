#include<iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(34);
    pq.push(40);
    // pq.pop();
    // pq.pop();

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}