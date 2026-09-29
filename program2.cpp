#include<bits/stdc++.h>
using namespace std;
class currency{
    int rs,ps;
    public:
    currency(float amt){
        rs = amt;
        ps = (amt - rs) * 100;
    }
    void show(){
        cout << "Rs."<<rs<<" and "<<ps<<" paise"<<endl;
    }
};
int main(){
    currency c=145.59;
    c.show();
    return 0;
}