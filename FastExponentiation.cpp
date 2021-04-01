//The time complexity of this method is equal to the O(1)...
#include<iostream>
using namespace std;
int fastExponentiation(int n, int p){
    int answer = 1;
    int multiplier = n;
    while(p!=0){
        int last_bit = p&1;
        if(last_bit){
            answer*=multiplier;
        }
        p = p>>1;
        multiplier = multiplier*multiplier;
    }
    return answer;
}
int main(){
    int n, p; cin>>n>>p;
    int answer = fastExponentiation(n, p);
    cout<<answer;
    return 0;
}