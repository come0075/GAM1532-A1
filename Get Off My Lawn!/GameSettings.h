//
//  GameSettings.h
//  Get Off My Lawn!
//
//  Created by Philippe Comeau on 2/4/2014.
//  Copyright (c) 2014 GAM1532 Game Development IV. All rights reserved.
//

#ifndef __Get_Off_My_Lawn___GameSettings__
#define __Get_Off_My_Lawn___GameSettings__

class GameSettings
{
public:
    static GameSettings* getInstance();
    
    bool getGameCenterEnabled();
    void setGameCenterEnabled(bool gameCenter);
    
    float getMusicVolume();
    void setMusicVolume(float volume);
    
    float getEffectsVolume();
    void setEffectsVolume(float volume);
    
    int getDifficulty();
    void setDifficulty(int difficulty);
    
private:
    GameSettings();
    ~GameSettings();
    
    static GameSettings* m_Instance;
    
    bool m_GameCenterEnabled;
    float m_MusicVolume;
    float m_EffectsVolume;
    int m_Difficulty;
};

#endif /* defined(__Get_Off_My_Lawn___GameSettings__) */
