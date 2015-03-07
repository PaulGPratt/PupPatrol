//
//  Creep.h
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#ifndef __PupPatrol__Creep__
#define __PupPatrol__Creep__

#include <stdio.h>
#include "cocos2d.h"

class Creep
{
public:
    Creep( cocos2d::Layer *layer );
    
private:
    cocos2d::Size visibleSize;
    cocos2d::Vec2 origin;
    
};

#endif /* defined(__PupPatrol__Creep__) */
