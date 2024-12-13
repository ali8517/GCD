#include <iostream>

using namespace std;
int GCD(int a, int b){
    int g,tmp=a*b;
    g=a%b;
    while(g!=0){
        a=b;
        b=g;
        g=a%b;
    }
    g=b;
    return g;
 }

int main()
{
int m,n;
cin>>m>>n;
cout<<endl;
cout << " GCD : " << GCD(m,n) <<endl;

    return 0;
}
