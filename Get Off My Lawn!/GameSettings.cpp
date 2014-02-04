//
//  GameSettings.cpp
//  Get Off My Lawn!
//
//  Created by Philippe Comeau on 2/4/2014.
//  Copyright (c) 2014 GAM1532 Game Development IV. All rights reserved.
//

#include "GameSettings.h"
#include <stdlib.h>

GameSettings* GameSettings::m_Instance = NULL;

GameSettings* GameSettings::getInstance()
{
    if(m_Instance == NULL)
    {
        m_Instance = new GameSettings();
    }
    return m_Instance;
}

GameSettings::GameSettings() :
    m_GameCenterEnabled(false),
    m_MusicVolume(0.0f),
    m_EffectsVolume(0.0f),
    m_Difficulty(0)
{
    
}

GameSettings::~GameSettings()
{
    
}

bool GameSettings::getGameCenterEnabled()
{
    return m_GameCenterEnabled;
}

void GameSettings::setGameCenterEnabled(bool gameCenter)
{
    m_GameCenterEnabled = gameCenter;
}

float GameSettings::getMusicVolume()
{
    return m_MusicVolume;
}

void GameSettings::setMusicVolume(float volume)
{
    m_MusicVolume = volume;
}

float GameSettings::getEffectsVolume()
{
    return m_EffectsVolume;
}

void GameSettings::setEffectsVolume(float volume)
{
    m_EffectsVolume = volume;
}

int GameSettings::getDifficulty()
{
    return m_Difficulty;
}

void GameSettings::setDifficulty(int difficulty)
{
    m_Difficulty = difficulty;
}