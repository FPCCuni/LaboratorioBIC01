#include<iostream>
using namespace std;
int main() {
   int i, n = 10*10;
   int *a = new int[n];
	 if (a != NULL) {
	 	for (i = 0; i < n; i++) { 
	 	    a[i] = i;
	 	    cout<<a[i]<<endl;
	 	}
	 }
   delete[] a;
   return 0;
}
