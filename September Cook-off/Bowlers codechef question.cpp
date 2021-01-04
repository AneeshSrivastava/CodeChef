#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;

	for(int i =0 ; i<T; i++){
	   int N, K, L;
	   cin>>N;
	   cin>>K;
	   cin>>L;

	   if(K*L<N){
	           cout<<-1<<"\n";
	          }

	   else if(K==1 && N>1){
	       cout<<-1<<"\n";
	   }

	   else{
	        int temp = 1;
	        for(int j =0 ; j<N; j++){
	            if(temp>K){
	                temp = 1;
                        }
	            cout<<temp<<" ";
	            temp++;
	        }
	        cout<<"\n";
	        }
	}
}
