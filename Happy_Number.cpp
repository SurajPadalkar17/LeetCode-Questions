#include <iostream>
using namespace std;

bool happy_No(int n){
    
    int temp = n;
    if(n != 7 && n!= 1 && n < 10) return false;
    int square = 0;
    while(temp != 1){
        int sumsquare = 0;
        while(temp > 0){
            int digit = temp % 10;
            square = digit * digit;
            sumsquare = sumsquare + square;
            temp = temp / 10;
        }
        temp = sumsquare;  
        if(temp == 4) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout<<happy_No(n);

    return 0;
}