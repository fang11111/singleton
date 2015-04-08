//
//  CSystemControl.cpp
//  singleton
//
//  Created by Student on 15-4-7.
//  Copyright (c) 2015年 qr. All rights reserved.
//

#include "CSystemControl.h"
CSystemControl* CSystemControl::Instance()
{
    
    if (_instance == NULL) {
        _instance = new CSystemControl;
        
    }
    return _instance;
    
}
 void CSystemControl:: destory()
{
    if (_instance) {
        delete _instance;
        _instance =NULL;
    }

}
CSystemControl::~CSystemControl()
{

    
}
void CSystemControl::print()
{
    cout<<"Call the print method!"<<endl;
    
}
CSystemControl::CSystemControl()
{
    cout<<"Construct a systemControl object"<<endl;
}
