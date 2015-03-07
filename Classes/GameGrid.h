//
//  GameGrid.h
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#ifndef __PupPatrol__GameGrid__
#define __PupPatrol__GameGrid__

#include <stdio.h>
#include "cocos2d.h"
#include "Definitions.h"

class Creep;
class GridSpace;
class Tower;


class GameGrid : public cocos2d::Node
{
public:
    GameGrid( cocos2d::Layer *layer );
    
private:
    bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
    void setupGrid();
    
    cocos2d::Size visibleSize;
    cocos2d::Vec2 origin;
    
    cocos2d::Sprite *gridSprite;
    
    GridSpace *gridArray[GRID_ROWS][GRID_COLS]; //Grid Array storing all grid spaces
    
    GridSpace *openSteps;       //Open Steps for Pathfinding
    GridSpace *closedSteps;     //Closed Steps for Pathfinding
    GridSpace *shortestPath;    //Shorteset Path found through Pathfinding
    
    Creep *creepVector;    //Enemy Units in the player's grid
    Tower *towerVector;    //Constructed Towers in the player's grid
    
    float cellHeight;
    float cellWidth;
    
};

#endif /* defined(__PupPatrol__GameGrid__) */
