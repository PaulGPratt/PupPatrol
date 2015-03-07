//
//  GameGrid.cpp
//  PupPatrol
//
//  Created by Invocial on 3/6/15.
//
//

#include "GameGrid.h"
#include "Definitions.h"
#include "Creep.h"
#include "GridSpace.h"
#include "Tower.h"

USING_NS_CC;

GameGrid::GameGrid( cocos2d::Layer *layer )
{
    visibleSize = Director::getInstance( )->getVisibleSize( );
    origin = Director::getInstance( )->getVisibleOrigin( );
    
    gridSprite = Sprite::create( "GameGrid.png");
    gridSprite->setPosition( visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y );
    
    cellHeight = gridSprite->getContentSize().height / GRID_ROWS;
    cellWidth = gridSprite->getContentSize().width / GRID_COLS;
    
    layer->addChild(gridSprite, 1);
    
    auto touchListener = EventListenerTouchOneByOne::create();
    touchListener->setSwallowTouches(true);
    touchListener->onTouchBegan = CC_CALLBACK_2(GameGrid::onTouchBegan, this);
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(touchListener, this);
    
}

bool GameGrid::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
    return true;
}

void GameGrid::setupGrid()
{
    for(int i = 0; i<GRID_ROWS; i++)
    {
        for (int j = 0; j<GRID_COLS; j++)
        {
            gridArray[i][j] = new GridSpace(this);
        }
    }
    
}
