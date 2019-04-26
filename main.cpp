//
//  main.cpp
//  homework14
//
//  Created by Mac on 2019/3/22.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;
int a,b,c;
int main(int argc,char** argv)
{
    cout<<"為了判斷可否圍成三角形請輸入三個數"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
            {
                cout<<"可以形成三角形";
            }
        }
    }
    else
    {
        cout<<"不可形成三角形"<<endl;
    }
    return 0;
}
