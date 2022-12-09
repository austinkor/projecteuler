#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i=1;
    int sum=0;
    int index=0;
    vector<int> fib ={1,2};

    while (i < 4000000 && fib[index]<4000000){
        index++;
        i += fib[index];
        fib.push_back(i);
        i = fib[index];
    }

    for (int i=0;i<fib.size();i++){
        if (fib[i] % 2==0){
            sum += fib[i];
        }
    }

    cout << sum;
    return 0;
}
