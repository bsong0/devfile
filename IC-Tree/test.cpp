#include <bits/stdc++.h>
using namespace std;

int rec(int count)
{
    if (count == 1) return 1;
    return count * rec(count-1);
}

int main()
{
    printf("%d\n", rec(5));
    return  0;
}