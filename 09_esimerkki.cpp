//
//  main.cpp
//  09_esimerkki
//
//  Created by Juhani Räisänen on 06/12/2018.
//  Copyright © 2018 Juhani Räisänen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int numbers[6], sum = 0;
    int multidim[3][2] = 
    {
        {2, -5},
        {4, 0},
        {9, 1}
    };
    cout << "Enter 5 numbers: ";
    numbers[5] = 22;
    
    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }
    sum += numbers[5];
    
    cout << "Summa = " << sum << endl;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            cout<< "multidim[" << i << "][" << j << "] = " << multidim[i][j] << endl;
        }
    }
 
    return 0;
}
