#include <bits/stdc++.h> 


void solve(stack<int>& s, int x){
    //base case check whether stack is empty or not

    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    solve(s, x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{

    solve(myStack , x);
    return myStack;
}
