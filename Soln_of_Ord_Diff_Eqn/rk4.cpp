#include<iostream>
#include<math.h>

using namespace std;

float f(float x, float y)
    {
        return (x*x-y);
    }

int main()
    {
        float x0, y0, xn ,n ,k ,k1 ,k2 ,k3 ,k4 ,h ;
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
                k2=(h*f(x+h/2,y+k1/2));
                k3=(h*f(x+h/2,y+k2/2));
                k4=(h*f(x+h,y+k3));
                k=((k1+2*k2+2*k3+k4)/6);
                x=x+h;
                y=y+k;
                cout<<i<<"\t\t"<<x<<"\t"<<y<<endl;
            }
    return 0;
    }

    /*
    Sample Output:
    Enter the Initial value of x :0
Enter the Initial value of y :2
Enter the final value of the x :5
Enter the value of the intervals n :5

iteration        x       y     
0               0       2      
1               1       1.02083
2               2       2.02865
3               3       5.03158
4               4       10.0327
5               5       17.0331
*/