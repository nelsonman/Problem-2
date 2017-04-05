//
//  main.cpp
//  Problem 2
//
//  Created by Nelson D'souza on 12/02/17.
//  Copyright © 2017 Nelson D'souza. All rights reserved.
//


#include <iostream>

using namespace std;

int main()

{
    int a = 1, b = 2, d = 0, e, h = 0;
    
    cout << "PLease enter the upper limit of your series: " << endl;
    cin >> e;
    
    cout << "1" << "\n" << "2";
    
     while ( d <= e)
    {
        d = a + b;
        a = b;
        b = d;
        
        cout << "\n" << d;
        
        if (d % 2 == 0)
        {
            h += d;
            
        }
        
        else
        {
            //Do Nothing
        }
    }
   
    cout << endl <<" --------------------------------------------------------------------" << "\n";
    
    cout << h << endl;
    
    return 0;
}
