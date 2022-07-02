#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float neg=0,pos=0,zero=0;
    cout << "enter the size of array"<<endl;
    cin >> n;
    int A[n];
    cout << "enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
        if(A[i] < 0)
        {
            neg++;
        }
        else if(A[i] > 0)
        {
          pos++;
        }
        else
         {
          zero++;
         }
    }
    cout<< fixed << setprecision(6) << pos/n<<endl;
    cout<< fixed << setprecision(6) << neg/n<<endl;
    cout<< fixed << setprecision(6) << zero/n<<endl;
   /* cout << neg/n << endl;
    cout << pos/n << endl;
    cout << zero/n << endl;*/
    return 0;
}