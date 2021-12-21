#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // bool boolean = true;
    while (true)
    {
        n++;
        string str = to_string(n);
        char f = str[0];
        char s = str[1];
        char t = str[2];
        char o = str[3];
        if( f!=s && s!=t && t!=o && f!=o && s!=o && f!=t)
            break;
    }
    cout<<n<<endl;
}
