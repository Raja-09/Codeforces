#include <bits/stdc++.h>
using namespace std;


void solution()
{
    int w, h;
    int k;

    vector<int> x1;
    vector<int> x2;
    vector<int> y1;
    vector<int> y2;
    cin >> w >> h;
    int maxDiff = INT_MIN;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        x1.push_back(temp);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        x2.push_back(temp);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        y1.push_back(temp);
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        y2.push_back(temp);
    }
    // for (int i = 0; i < x1.size(); i++)
    //     cout << x1[i] << " ";
    // cout << endl;
    // for (int i = 0; i < x2.size(); i++)
    //     cout << x2[i] << " ";
    // cout << endl;
    // for (int i = 0; i < y1.size(); i++)
    //     cout << y1[i] << " ";
    // cout << endl;
    // for (int i = 0; i < y2.size(); i++)
    //     cout << y2[i] << " ";
    // cout << endl;

    unsigned long long int	x1diff = x1[x1.size()-1]-x1[0];
    unsigned long long int	x2diff = x2[x2.size()-1]-x2[0];
    unsigned long long int	y1diff = y1[y1.size()-1]-y1[0];
    unsigned long long int	y2diff = y2[y2.size()-1]-y2[0];
    // long double  xmax = max(x1diff,x2diff);
    // long double  ymax = max(x1diff,y2diff);

    int xflag = 0 ;
    int yflag = 0;
    if ( x1diff>x2diff )
        xflag = 1;
    else
        xflag = 2;
    if(y1diff>y2diff)
        yflag = 1;
    else
        yflag = 2;

    long doublearea ;
    long doublemaxarea = INT_MIN;

    if ( xflag ==1 )
    {
        area = x1diff * h ;
        maxarea = max(area,maxarea);
    }
    else if (xflag ==2 )
    {
        area = x2diff *h ;
        maxarea = max(area,maxarea);
    }
    if ( yflag == 1)
    {
        area = y1diff*w;
        maxarea = max(area,maxarea);
    }
    else if (yflag == 2)
    {
        area = y2diff*w;
        maxarea = max(area,maxarea);
    }
    cout<< maxarea<< " ";


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
