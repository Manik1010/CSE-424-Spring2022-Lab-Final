#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x,y,x1,y1,dx,dy,dx2,dy2,pi,r,n;
    int res;

    cout<<"\nEnter the value of x and y : \n";
    cin>>x1>>y1;
    //x = 0;
    //y = 0;
    //cout<< x << y;
    //r = 10;
    cout<<"\nEnter the value of r : \n";
    cin>>r;
    pi = 1 - r;
    cout<< "\n\n";

    x = 0;
    y = r;
    n=0;


   while(x != y){
    if(pi>=0){

        x += 1;
        y -= 1;
        pi = pi + 2 * x + 1 - 2*y;
        cout<< "P("<< x <<","<< y<< ")\n";
        //cout<< pi << "pi\n";
        //n += 1;
        //if(n==2){
        //    break;
        //}

    }
    else if(pi<0){

        x += 1;
        y = y;
        pi = pi + 2 * x + 1;
        cout<< "P("<< x <<","<< y<< ")\n";
        //cout<< pi << "pi\n";

    }
   }
    return 0;
}

