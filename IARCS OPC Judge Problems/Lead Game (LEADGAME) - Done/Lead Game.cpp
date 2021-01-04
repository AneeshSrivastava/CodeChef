#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int a, b, lead =0, leader =0, prev_lead=0,player1 =0, player2 =0;
	while(T-->0){
	    cin>>a;
	    cin>>b;
	    player1 += a;
	    player2 += b;
	        if(player1>player2){
	            lead = player1-player2;
	            if(lead>prev_lead){
	                prev_lead = lead;
	                leader = 1;
	            }
	        }
	        else{
	            lead = player2-player1;
	            if(lead>prev_lead){
	                prev_lead = lead;
	                leader = 2;
	            }
	        }
	    }
	    cout<<leader<<" "<<prev_lead<<endl;
	return 0;
}
