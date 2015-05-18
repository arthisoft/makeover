//
//  test2.h
//  swati
//
//  Created by ArthiSoft on 18/05/15.

#ifndef __swati__test2__
#define __swati__test2__

#include <stdio.h>
#include "cocos2d.h"

using namespace cocos2d;

class test2: public cocos2d::CCLayer
{
    
    CCSprite *Background;
    CCPoint location;
    void keyBackClicked();
    
public:
    
    virtual  void ccTouchesBegan(CCSet *pTouches,CCEvent *pEvent);
    virtual  void ccTouchesMoved(CCSet *pTouches,CCEvent *pEvent);
    virtual  void ccTouchesEnded(CCSet *pTouches,CCEvent *pEvent);
    
    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(test2);
};


#endif /* defined(__swati__test2__) */
