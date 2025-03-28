#include<bits/stdc++.h>
using namespace std;

//gcd=(Bigger%smaller,smaller);


int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(max(a,b)%min(a,b),min(a,b));
}



int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}

