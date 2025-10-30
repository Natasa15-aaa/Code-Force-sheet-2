#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;


    for(int i=2;i<=N;i+=2)
    {
    cout<<i<<endl;

    }
    if(N<2)
    {
    cout<<-1<<endl;
    }

    return 0;
}
