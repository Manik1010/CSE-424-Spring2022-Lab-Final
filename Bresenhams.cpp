#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x1,y1,x2,y2,dx,dy,dx2,dy2,di,step;
    int res;

    cout<<"\nEnter the value of x1 and y1 : \n";
    cin>>x1>>y1;
    //x1=20;
    //y1=10;
    cout<< x1<<" " << y1;
    cout<<"\nEnter the value of x2 and y2 : \n";
    cin>>x2>>y2;
    //x2=30;
    //y2=18;
    cout<< x2 <<" "<<y2<< "\n";

    dx = x2 - x1;
    dy = y2 - y1;
    //cout<<dx<<dy<<"\n";

    dx2 = 2 * dx;
    dy2 = 2* dy;
    //cout<<dx2<<dy2<<"\n";

    di = dy2 - dx;
    //cout<<di<<"\n";
    while(x1 != x2 && y1 != y2){
        if(di >= 0){
                di = di + dy2 -dx2;
                y1 += 1;
                x1 += 1;
                //cout<<di;
                cout<< "P("<< x1 <<","<< y1 << ")\n";

        }
        else{
                di = di + dy2;
                y1 = y1;
                x1 += 1;
                //cout<<di;

                cout<< "P("<< x1 <<","<< y1 << ")\n";
        }
    }


    return 0;
}
