#include <iostream>
using namespace std;

int main() {
	int M;
	cin>>M;
	int books[M];
	for(int i=0; i<M;i++){
	    cin>>books[i];
	}
	int N;
	cin>>N;
	int book_position[N];
	for(int j=0; j<N;j++){
	    cin>>book_position[j];
	}
	// Now the logic -----
	int borrowed[N];
	int y;
	for(int k=0; k<N;k++){
	    for( int l = 0; l<M; l++){
	        if(book_position[k]-1 == l){
	            borrowed[k] = books[l];
	            M = M-1;
	            books[l] = books[l+1];
	            y = ++k;
	            break;
	        }
	    }
	}

	for( y; y<N;y++){
	    for( int l = 0; l<M; l++){
	        if(book_position[y]-1 == l){

	            M = M-1;
	            books[l] = books[l+1];
	            borrowed[y] = books[l];
	            break;
	        }
	    }
	}
	for(int y =0; y<N;y++)
	{
	cout<<borrowed[y]<<" ";
	}
	return 0;
}
