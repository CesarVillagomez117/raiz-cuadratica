#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main (){
    double a, b, c;
    //valores que vas a utilizar
    cout<<" introduce el valor de a"<< endl;
    cin>>a;
    cout << "introduce el valor de b"<< endl;
    cin >> b;
    cout << "introduce el valor de c"<< endl;
    cin >>c;
    //el resulatdo
    cout << "resultado...";
      cout<<"x1... "<<setprecision(3)<<((b*-1)+sqrt((b*b)-((a*c)*4)))/(a*2)<<endl;
    cout<<"x2... "<<setprecision(3)<<((b*-1)-sqrt((b*b)-((a*c)*4)))/(a*2)<<endl;
}
