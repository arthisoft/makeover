//
//  test2.cpp
//  swati
//
//  Created by ArthiSoft on 18/05/15.

#include "test2.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* test2::scene()
{
    CCScene *scene = CCScene::create();
    test2 *layer = test2::create();
    scene->addChild(layer);
    
    return scene;
}
bool test2::init()
{
    if ( !CCLayer::init() )
    {
        return false;
    }
    
    this->setKeypadEnabled(true);
    setTouchEnabled(true);
    
    Background=CCSprite::create("");
    Background->setPosition(ccp(IPAD_ORG_WIDTH/2, IPAD_ORG_HEIGHT/2));
    Background->setScaleX(SCALE_RATIO_X);
    Background->setScaleY(SCALE_RATIO_Y);
    this->addChild(Background);
    
    
    
    return true;
}



void test2::keyBackClicked()
{
    SimpleAudioEngine::sharedEngine()->stopAllEffects();
    CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(1.0, HelloWorld::scene()));
}

void test2::ccTouchesBegan(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent)
{
    CCTouch *touch=(CCTouch*)pTouches->anyObject();
    location=touch->getLocationInView();
    location=CCDirector::sharedDirector()->convertToGL(location);
    location=this->convertToNodeSpace(location);
    
}
void test2::ccTouchesMoved(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent)
{
    CCTouch *touch=(CCTouch*)pTouches->anyObject();
    location=touch->getLocationInView();
    location=CCDirector::sharedDirector()->convertToGL(location);
    location=this->convertToNodeSpace(location);
    
}
void test2::ccTouchesEnded(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent)
{
    CCTouch *touch=(CCTouch*)pTouches->anyObject();
    location=touch->getLocationInView();
    location=CCDirector::sharedDirector()->convertToGL(location);
    location=this->convertToNodeSpace(location);
    
    CCLOG("ccp(POSX*%2.0f,POSY*%2.0f)",location.x,location.y);
}