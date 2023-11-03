#include<bits/stdc++.h>

using namespace std;
void PrintName(int i){
    if(i==0)return;
    cout <<"Nitish Kumar"<<endl;
    i--;
    PrintName(i);
}
int main(){

            int n=4;
            PrintName(n);
            cout<<"Name Succesfully Print"<<endl;

     return 0;

}