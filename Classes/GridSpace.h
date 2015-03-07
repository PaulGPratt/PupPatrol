//
//  GridSpace.h
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#ifndef __PupPatrol__GridSpace__
#define __PupPatrol__GridSpace__

#include <stdio.h>
#include "cocos2d.h"

class GameGrid;

class GridSpace
{
public:
    GridSpace( GameGrid *gameGrid );
    
private:
    cocos2d::Size visibleSize;
    cocos2d::Vec2 origin;
    
};

#endif /* defined(__PupPatrol__GridSpace__) */
