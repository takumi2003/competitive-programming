#include <iostream>
using namespace std;

long long A[1 << 18];
int main()
{
    int L, N, K;
    cin >> N >> L;
    cin >> K;
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        
    }
    long left = 0;
    long right = L;

    while (right - left > 1)
    {
        int i = 0;
        long mid = left + (right - left) / 2;
        if(A[i] < mid) right = mid;
        else left = mid;
        i++;
    }

    cout << left << endl;
}
