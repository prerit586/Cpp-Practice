#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int count=0;
    int divisor=0;
    int sum=0;

    for (int i=1; i<n; i++){
        if (n%i==0){
            sum = sum +i;
        }
        if(sum>n){
            cout <<"abunant";
        }
        else if (sum ==n){
            cout << "proper";
        }
        else{
            cout <<"deficient";
        }
    }
      cout <<"total2"<< count << endl;
       
    return 0;
}