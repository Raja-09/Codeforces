#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
            sum+=(n-i)*i;
    }
    cout<<sum+n<<endl;
}
int main()
{
    // int t;
    // cin>>t;
    // t=1;
    // while(t--){
    //     solution();
    // }
    solution();
    return 0;
}