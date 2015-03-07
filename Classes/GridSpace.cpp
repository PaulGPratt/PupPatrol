//
//  GridSpace.cpp
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#include "GridSpace.h"
#include "Definitions.h"
#include "GameGrid.h"

USING_NS_CC;

GridSpace::GridSpace( GameGrid *gameGrid )
{
    visibleSize = Director::getInstance( )->getVisibleSize( );
    origin = Director::getInstance( )->getVisibleOrigin( );
}
