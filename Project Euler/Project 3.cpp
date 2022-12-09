#include <iostream>
using namespace std;

int main(){
    int i = 2;
    long long num = 600851475143;

    while (i*i <= num){
        if (num%i==0){
            num/=i;
        }
        else {
            i++;
        }
    }
    if (num>1) {
        cout << num;
    }

    return 0;
}
