//
//  CSystemControl.h
//  singleton
//
//  Created by Student on 15-4-7.
//  Copyright (c) 2015年 qr. All rights reserved.
//

#ifndef __singleton__CSystemControl__
#define __singleton__CSystemControl__

#include <iostream>
using namespace std;

class CSystemControl
{
public:
    static CSystemControl* Instance();
    static void destory();
    ~CSystemControl();
    void print();
protected:
    CSystemControl();
private:
    static CSystemControl* _instance;

};
CSystemControl* CSystemControl::_instance=NULL;


#endif /* defined(__singleton__CSystemControl__) */
