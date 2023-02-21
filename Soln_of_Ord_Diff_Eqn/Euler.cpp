#include<iostream>
#include<math.h>

using namespace std;

float f(float x, float y)
    {
        return (x*x-y);
    }

int main()
    {
        float x0, y0, xn ,n ,k ,h ;
        cout<<"Enter the Initial value of x :";
        cin>>x0;
        cout<<"Enter the Initial value of y :";
        cin>>y0;
        cout<<"Enter the final value of the x :";
        cin>>xn;
        cout<<"Enter the value of the intervals n :";
        cin>>n;
            h =((xn-x0)/n);
        float x=x0;
        float y=y0;
        cout<<endl<<"iteration \t x \t y"<<endl;
        cout<<0<<"\t\t"<<x<<"\t"<<y<<endl;
        for (int i=1;i<=n;i++)
            {
                k=(h*f(x,y));
                x=x+h;
                y=y+k;
                cout<<i<<"\t\t"<<x<<"\t"<<y<<endl;
            }
    return 0;
    }

    /*
    Sample Output
    Enter the Initial value of x :0
Enter the Initial value of y :2
Enter the final value of the x :5
Enter the value of the intervals n :3

iteration        x       y      
0               0       2       
1               1.66667 -1.33333
2               3.33333 5.51852
3               5       14.8395
*/