//We will se three methods here to compute the number of bits in the given number..
#include<iostream>
using namespace std;
int computeSetbits(int n){
    int ans = 0;
    while(n!=0){
        ans+=(n&1);
        n = n>>1;
    }
    return ans;
}
int computeFast(int n){
    int ans = 0;
    while(n!=0){
        n = n & (n-1);
        ans++;
    }
    return ans;
}
int main(){
    int n; cin>>n;
    int answer1 = computeSetbits(n);
    int answer2 = computeFast(n);
    int answer3 = __builtin_popcount(n);
    cout<<answer1<<" "<<answer2<<" "<<answer3<<endl;
    return 0;
}