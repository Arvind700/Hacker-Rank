#include <bits/stdc++.h>

using namespace std;

int main()
{
 int i,j,n,sum=0;
 cout<<"enter the size of array"<<endl;
 cin >> n;
 int A[n],p=0,B[n];

  for(i=0;i<n;i++)
   {
     cin >> A[i];
    }
      for(i=0;i<n;i++)
        {
         cout<< A[i] << " ";
        }  
  cout<<endl;
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j != p)
            { 
                sum = sum + A[j];
            }
        }   
     
   
     B[i] = sum;
     sum=0;
     //cout << B[i] <<" ";
     p++;
    }
    cout<< *min_element(B, B + n)<<" ";
    cout << *max_element(B, B + n);
   /* int &min = *min_element(B, B + n );
    int &max = *max_element(B, B + n );
    cout<<"\nFinding the Element using address variable";
    cout<<"\nMin Element = "<<min;
    cout<<"\nMax Element = "<<max;
    */
  return 0;
}
