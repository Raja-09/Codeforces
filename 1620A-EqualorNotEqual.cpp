#include <bits/stdc++.h>
using namespace std;

void solution2()
{
    string inp;
    cin>>inp;
    int count=0;
    for(int i=0;i<inp.length();i++)
    {
        if(inp[i]=='N')
            count++;
    }
    if(count==1)
        cout<<"NO";
    else
        cout<<"YES";
}
 //something i tried and didnt work
// void solution()
// {
//     string inp;
//     cin >> inp;
//     int *arr = new int[inp.length()];
//     int n = inp.length();
//     for (int i = 0; i < inp.length(); i++)
//         arr[i] = 0;
//     arr[0] = 1;
//     for (int i = 0; i < inp.length() - 1; i++)
//     {
//         if (inp[i] == 'E')
//         {
//             arr[i + 1] = arr[i];
//         }
//         else
//         {
//             arr[i + 1] = arr[i] + 1;
//         }
//     }

//     // cout<<arr[n]<<" "<< arr[0]<< " "<<inp[n-1]<< " ";
//     if (inp[n - 1] == 'E')
//     {
//         arr[n - 1] = arr[0];
//     }

//     for (int i = 0; i < inp.length(); i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     // for (int i = 0; i < inp.length(); i++)
//     //     cout << inp[i] << " ";
//     // cout << endl;
//     bool ans;
//     int i;
//     for (i = 0; i < n - 1; i++)
//     {
//         if (inp[i] == 'N')
//         {
//             if (arr[i] == arr[i + 1])
//                 break;
//         }
//         else
//         {
//             if (arr[i] != arr[i + 1])
//                 break;
//         }
//     }
//     if (i != n - 1)
//     {
//         ans = false;
//     }
//     else
//         ans = true;

//     if (ans)
//     {
//         if (inp[n - 1] == 'E')
//         {
//             if (arr[n - 1] != arr[0])
//                 ans = false;
//         }
//         else
//         {
//             if (arr[n - 1] == arr[0])
//                 ans = false;
//         }
//     }
//     if (ans)
//         cout << "YES";
//     else
//         cout << "NO";
// }
int main()
{
    int t;
    // t=1;
    cin >> t;
    while (t--)
    {
        solution2();
        cout << endl;
    }
}
