#include <iostream>

using namespace std;

int main()
{
    int n,i,m,div;
    float fin=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m;
        //div=100-m;
        fin+=m;
    }
    fin=fin/n;
    cout<<fin<<endl;
    return 0;
}
