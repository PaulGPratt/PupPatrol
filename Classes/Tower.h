//
//  Tower.h
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#ifndef __PupPatrol__Tower__
#define __PupPatrol__Tower__

#include <stdio.h>
#include "cocos2d.h"

class Tower
{
public:
    Tower( cocos2d::Layer *layer );
    
private:
    cocos2d::Size visibleSize;
    cocos2d::Vec2 origin;
    
};

#endif /* defined(__PupPatrol__Tower__) */
