#include <iostream>
using namespace std;
int main(){
    int c,d,e,f,g,a,b,C;
    cin>>c>>d>>e>>f>>g>>a>>b>>C;
    if (c<d && d<e && e<f && f<g && g<a && a<b && b<C)
    {
        cout<<"ascending"<<endl;
    }
    else if(c>d && d>e && e>f && f>g && g>a && a>b && b>C)
    {
        cout<<"descending"<<endl;
    }
    else{
        cout<<"mixed"<<endl;
    }
}