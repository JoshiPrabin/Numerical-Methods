#include<iostream>
#include<math.h>

using namespace std;

float f(float x, float y)
    {
        return (x*x-y);
    }

int main()
    {
        float x0, y0, xn ,n ,k ,h ,k1 ,k2 ;
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
                k1=(h*f(x,y));
                k2=(h*f(x+h,y+k));
                k=((k1+k2)/2);
                x=x+h;
                y=y+k;
                cout<<i<<"\t\t"<<x<<"\t"<<y<<endl;
            }
    return 0;
    }

    /*
    Sample output
    Enter the Initial value of x :0
Enter the Initial value of y :2
Enter the final value of the x :5
Enter the value of the intervals n :5

iteration        x       y 
0               0       2  
1               1       0.5
2               2       3.25
3               3       5.125
4               4       11.5625
5               5       17.2812
*/