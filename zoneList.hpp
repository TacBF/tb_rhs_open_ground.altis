#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK     SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}      , {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE   , SPAWN_XRAY,    {2}      , {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_BLUE   , SPAWN_NEVER,   {1,3}      , {}    , 1      , {}        , 0    , "Molos East" },
{ 3, TEAM_BLUE   , SPAWN_NEVER,   {2,4}      , {}   , 1      , {}         , 0    , "Molos West" },
{ 4, TEAM_BLUE   , SPAWN_NEVER,   {3,5}      , {}   , 1      , {}         , 0    , "Checkpoint" },

{ 5, TEAM_NEUTRAL, SPAWN_NEVER,   {4,6}      , {}    , 1      , {}        , 0    , "Outpost Crazy Bunny" },

{ 6, TEAM_NEUTRAL, SPAWN_NEVER,   {5,7}      , {}    , 1      , {}        , 0    , "Outpost Eye" },

{ 7, TEAM_NEUTRAL, SPAWN_NEVER,   {6,8}      , {}    , 1      , {}        , 0    , "Outpost Hetnada" },
 
{ 8, TEAM_RED   , SPAWN_NEVER,    {7,9}      , {}   , 1      , {}         , 0    , "Sofia East" },
{ 9, TEAM_RED   , SPAWN_NEVER,    {8,10}      , {}   , 1      , {}         , 0    , "Sofia West " },
{ 10, TEAM_RED  , SPAWN_NEVER,    {9,11}      , {}    , 1      , {}        , 0    , "Slums" },
{ 11, TEAM_RED  , SPAWN_XRAY,     {10}      , {}    , 1      , {}        , 0    , "%3" },

{ 12, TEAM_NEUTRAL   , SPAWN_INSTANT,    {}      , {}   , 1      , {1,6}         , 2    , "FB Checkpoint" },
{ 13, TEAM_BLUE   , SPAWN_INSTANT,    {}      , {}   , 1      , {1}         , 1    , "FB North" },

{ 14, TEAM_RED   , SPAWN_INSTANT,    {}      , {}   , 1      , {6,11}         , 2    , "FB Sofia" },
{ 15, TEAM_RED   , SPAWN_INSTANT,    {}      , {}   , 1      , {11}         , 1    , "FB South" },

//{ 16, TEAM_NEUTRAL   , SPAWN_INSTANT,    {}      , {}   , 1      , {1,5,7,11}         , 3    , "FB Center" }



};


