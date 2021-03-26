#include <bits/stdc++.h>

using namespace std;

int MAX_NUM;

int BinarySearch(int node, int balls)
{
    int left = node * 2;
    int right = left + 1;
    if (left<MAX_NUM && right<MAX_NUM)
    {
        if (balls%2==0) BinarySearch(right, balls/2); 
        else BinarySearch(left, balls/2 + 1); 
    }
    else return node; 
}

int main()
{
    int count, D, I;
    cin>>count;
    while (count--)
    {
        cin>>D>>I;
        MAX_NUM = pow(2.0, D);
        cout<<BinarySearch(1, I)<<endl;
    }
    return 0;
}
