#include<iostream>
using namespace std;

int     fibonacci(int sayi){
      int fibo=0;
       for(int i=0;i<=sayi;i++){
       	  if(i==0 || i==1){
       	  	return 1;
       	  	continue;
			 }
			 else{
			 	fibo=fibonacci(i-2)+fibonacci(i-1);
			 	return fibo;
			 }
	   }
   }
int main(){
	 
	int x = fibonacci(5);
	cout<<x;
	return 0;
}

