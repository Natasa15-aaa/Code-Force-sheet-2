
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;

        if(x % 2 == 0) even++;
        else           odd++;

        if(x > 0)      pos++;
        else if(x < 0) neg++;
    }

    cout << "Even: "     << even << endl;
    cout << "Odd: "      << odd  << endl;
    cout << "Positive: " << pos  << endl;
    cout << "Negative: " << neg  << endl;

    return 0;
}
