#include <iostream>
using namespace std;



int fun(int i, int* ptr, int t){
        if(i<0){
            return t;
        }
        t = t + *ptr;
        fun(i--, ptr++, t);
    }

int main()
{
    int ar[5] = { 30, 10, 20, 40, 50 };
    int* ptr;
    ptr = &ar[0];
    int t = 0;

    cout << fun(4, ptr, t);

    return 0;
}