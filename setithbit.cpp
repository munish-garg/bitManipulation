#include<iostream>
using namespace std;
int main(){
    int n, i; cin>>n>>i;
    //n-> the number...
    //i-> ith bit which we have to set..
    //zero based numbering ,i.e., i can be zero...
    int mask = (1<<i);
    n = n | mask;
    cout<<n<<endl;
    return 0;
}