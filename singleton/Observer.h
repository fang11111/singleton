//
//  Observer.h
//  singleton
//
//  Created by Student on 15-4-7.
//  Copyright (c) 2015年 qr. All rights reserved.
//

#ifndef __singleton__Observer__
#define __singleton__Observer__

#include <iostream>
using namespace std;
class Observer
{
public:
    virtual void Update() =0;
    virtual ~Observer();

};
class Engine
{
private:
    Observer& _observer;
public:
    Engine(Observer& aObserver):_observer(aObserver){}
public:
    void DownLoad()
    {
    
        cout<<"subject finished!"<<endl;
        _observer.Update();
    }

};
class AppUI:public Observer
{
private:
    Engine* _engine;
public:
    AppUI()
    {
        _engine = new  Engine(*this);
    }
    ~AppUI()
    {
        delete _engine;
    }
    void start()
    {
        cout<<"the subject is called "<<endl;
        _engine->DownLoad();
    }
    void Update()
    {
        cout<<"the observer is called"<<endl;
    }

};
#endif /* defined(__singleton__Observer__) */
