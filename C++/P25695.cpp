#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[10] = {5, 13, 8, 4, 27, 45, 2, 6, 19, 20};
    sort(a, a+10);
    for(int i=0; i<10; ++i){
        cout << a[i] << " ";

    }
    cout << endl << *max_element(a, a+10);


    return 0;
}