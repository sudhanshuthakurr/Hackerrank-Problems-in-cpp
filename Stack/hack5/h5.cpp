#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int i;
    cin>>i;
    stack<string>stk;
    string st;
    while(i--){
        int n; cin>>n;
        if(n==1){
            string str;
            cin>>str;
            stk.push(st); 
            st+=str;
        }
        else if(n==2){
            int k;cin>>k;
             stk.push(st);
            st.erase(st.size()-k);
        }
        else if(n==3){
            int k;cin>>k;
            cout<<st[k-1]<<endl; 
        }
        else{
            st = stk.top();  
            stk.pop();
        }
    }  
    return 0;
}