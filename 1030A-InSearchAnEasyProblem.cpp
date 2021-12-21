#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin>>n;
    bool isHard=false;    
    for(int i=0;i<n;i++){
        int response;
        cin>>response;
        response==1 ? isHard=true: isHard;
    }
    if(isHard)
        cout<<"Hard";
    else
        cout<<"Easy";

}
int main()
{
    int t;
    // cin >> t;
    t=1;
    while (t--)
    {
        solution();
        return 0;
    }
    cout << endl;
}