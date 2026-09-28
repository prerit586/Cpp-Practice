#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int temp=0;
    int fact=1;
    int sum =0;

    

    while(n > 0){
        temp=n%10;
        n=n/10;

        for(int j=1; j<=temp; j++){
            fact= fact * j;
               
        }
//  cout<< fact << endl;
        sum = sum+fact;
        fact = 1;
    }

    if( sum == n ){
        cout << "Strong Number" << endl;
    }else{
        cout << "Normal" <<endl;
    }
       
    return 0;
}