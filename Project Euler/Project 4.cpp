#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int num=10000;
    int palindrome;

    while (num < 1000000){
        bool condition = true;
        string temp = to_string(num);
        int len = temp.length();

        for (int i = 0;i<len/2;i++){
            if (not(temp[i]==temp[len-i-1])){
                condition = false;
            }
        }

        if (condition){
            for (int i=100;i<1000;i++){
                if (num%i==0){
                    if ((ceil(num/i)==floor(num/i))&&(num/i)>99 && (num/i) < 1000){
                        palindrome = num;
                    }
                }
            }
        }
        num++;
    }
    cout << palindrome;
    return 0;
}
