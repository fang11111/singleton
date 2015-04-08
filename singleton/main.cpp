//
//  main.cpp
//  singleton
//
//  Created by Student on 15-4-7.
//  Copyright (c) 2015年 qr. All rights reserved.
//

#include <iostream>
#include "CSystemControl.h"
#include "Delegate.h"
#include "Observer.h"
int main()
{
    CSystemControl* p1 =CSystemControl::Instance();
    CSystemControl* p2 =CSystemControl::Instance();
    
    p1->print();
    p2->print();
    
    
    
    Window win(100,200);
    win.Area();
    

    AppUI* pUI= new AppUI;
    pUI->start();
    delete pUI;
    
    
    
    
    
    
    return 0;
}

