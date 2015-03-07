//
//  Tower.cpp
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#include "Tower.h"
#include "Definitions.h"

USING_NS_CC;

Tower::Tower( cocos2d::Layer *layer )
{
    visibleSize = Director::getInstance( )->getVisibleSize( );
    origin = Director::getInstance( )->getVisibleOrigin( );
}
