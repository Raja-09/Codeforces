#include <bits/stdc++.h>
using namespace std;
void solution()
{

    string inp;
    cin >> inp;
    char temp = inp[0];
    bool issquare = true;
    if (inp.length() % 2 != 0)
        issquare = false;
    if (issquare)
    {
        string firsthalf="" ;
        string secondhalf="" ;
        int mid = inp.length() / 2;
        for (int i = 0; i <mid;i++)
        {
            firsthalf+=inp[i];
        }
        for(int i=mid;i<inp.length();i++)
            secondhalf+=inp[i];

        if(firsthalf!=secondhalf)
            issquare=false;
    }

    if(issquare )
        cout<<"YES";
    else
        cout<<"NO";

}
int main()
{
    int t;
    // t=1;
    cin >> t;
    while (t--)
    {
        solution();
        cout << endl;
    }
}
