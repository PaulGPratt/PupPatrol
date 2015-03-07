//
//  Creep.cpp
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#include "Creep.h"
#include "Definitions.h"

USING_NS_CC;

Creep::Creep( cocos2d::Layer *layer )
{
    visibleSize = Director::getInstance( )->getVisibleSize( );
    origin = Director::getInstance( )->getVisibleOrigin( );
}