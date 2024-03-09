// Continue statement in a loop
#include <iostream>
using namespace std;
int main (){
    int i =1;
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    for (int i =1; i<=n; i++){
        if(i == 3){
            continue;
        }
    cout << i << endl;
    }
    return 0;
}
