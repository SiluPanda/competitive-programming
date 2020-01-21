/* Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n1, n2, n3;
   cin >> n1 >> n2 >> n3;
   int a[n1], b[n2], c[n3];
   int sum1 = 0, sum2 = 0, sum3 = 0;
   for(int i = 0; i < n1; i++) {
       cin >> a[i];
       sum1 += a[i];
   }
   for(int i = 0; i < n2; i++) {
       cin >> b[i];
       sum2 += b[i];
   }
   for(int i = 0; i < n3; i++) {
       cin >> c[i];
       sum3 += c[i];
   }

   int i = 0, j = 0, k = 0;
   bool found = false;
   while(i < n1 && j < n2 && k < n3){
       if(sum1 == sum2 && sum2 == sum3){
           cout << sum1 << endl;
           found = true;
           break;
       }
       else if(sum1 > sum2){
           sum1 -= a[i++];
       }
       else if(sum2 > sum3){
           sum2 -= b[j++];
       }
       else if(sum3 > sum1){
          sum3 -= c[k++];
       }
   }
   if(!found) cout << 0 << endl;

}
