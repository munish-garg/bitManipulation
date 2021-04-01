#include<iostream>
using namespace std;
int main(){
    int n, i, j; cin>>n>>i>>j;
    int first_mask = -1 << (j+1);
    int second_mask = (1<<i) - 1;
    int final_mask = first_mask | second_mask;
    n = n & final_mask;
    cout<<n<<endl;
    return 0;
}