#include <iostream>
using namespace std;

int main(){
    int num = 1;
    bool condition;

    while (true){
        condition = true;
        for (int i=1;i<21;i++){
            if (not(num % i ==0)){
                condition = false;
                break;
            }
        }
        if (condition){
            cout << num;
            break;
        }
        else{
            num++;
        }
    }

    return 0;
}
