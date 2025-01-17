/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#ifndef DEF_AHNKAHET_H
#define DEF_AHNKAHET_H

#define MAX_ENCOUNTER           5

#include "CreatureAIImpl.h"

#define AhnahetScriptName "instance_ahnkahet"

enum Data64
{
    DATA_ELDER_NADOX,
    DATA_PRINCE_TALDARAM,
    DATA_JEDOGA_SHADOWSEEKER,
    DATA_HERALD_VOLAZJ,
    DATA_AMANITAR,
    DATA_PRINCE_TALDARAM_PLATFORM,
};

enum Data
{
    DATA_ELDER_NADOX_EVENT,
    DATA_PRINCE_TALDARAM_EVENT,
    DATA_JEDOGA_SHADOWSEEKER_EVENT,
    DATA_HERALD_VOLAZJ_EVENT,
    DATA_AMANITAR_EVENT,
    DATA_SPHERE_EVENT,

    DATA_NADOX_ACHIEVEMENT,
    DATA_JEDOGA_ACHIEVEMENT,
};

enum Npc
{
    NPC_ELDER_NADOX                 = 29309,
    NPC_PRINCE_TALDARAM             = 29308,
    NPC_JEDOGA_SHADOWSEEKER         = 29310,
    NPC_HERALD_JOLAZJ               = 29311,
    NPC_AMANITAR                    = 30258,

    //spells
    SPELL_SHADOW_SICKLE             = 56701, // Shadow Sickle Normal
    SPELL_SHADOW_SICKLE_H           = 59104  // Shadow Sickle Heroic
};

template <class AI, class T>
inline AI* GetAhnkahetAI(T* obj)
{
    return GetInstanceAI<AI>(obj, AhnahetScriptName);
}


#endif
