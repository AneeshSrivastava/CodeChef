#include <iostream>
using namespace std;
#define si(x)	scanf("%d",&x)

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}
int main() {
	// your code goes here
    int N;
    si(N);
    cout<<"The value of N is -"<<N<<endl;
    int g = gcd(2, 3);
    cout<<g;
    cout<<endl;


}
