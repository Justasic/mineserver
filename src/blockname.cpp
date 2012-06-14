/*
 * Copyright (c) 2012, The Mineserver Project
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 *  notice, this list of conditions and the following disclaimer in the
 *  documentation and/or other materials provided with the distribution.
 * Neither the name of the The Mineserver Project nor the
 *  names of its contributors may be used to endorse or promote products
 *  derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "constants_num.h"

std::string GetBlockName(Block b)
{
  switch(b)
  {
    case BLOCK_AIR:
      return "air";
    case BLOCK_STONE:
      return "stone";
    case BLOCK_GRASS:
      return "grass";
    case BLOCK_DIRT:
      return "dirt";
    case BLOCK_COBBLESTONE:
      return "cobblestone";
    case BLOCK_PLANK:
      return "plank";
    case BLOCK_SAPLING:
      return "sapling";
    case BLOCK_BEDROCK:
      return "bedrock";
    case BLOCK_WATER:
      return "water";
    case BLOCK_STATIONARY_WATER:
      return "stationary water";
    case BLOCK_LAVA:
      return "lava";
    case BLOCK_STATIONARY_LAVA:
      return "stationary lava";
    case BLOCK_SAND:
      return "sand";
    case BLOCK_GRAVEL:
      return "gravel";
    case BLOCK_GOLD_ORE:
      return "gold ore";
    case BLOCK_IRON_ORE:
      return "iron ore";
    case BLOCK_COAL_ORE:
      return "coal ore";
    case BLOCK_WOOD:
      return "wood";
    case BLOCK_LEAVES:
      return "leaves";
    case BLOCK_SPONGE:
      return "sponge";
    case BLOCK_GLASS:
      return "glass";
    case BLOCK_LAPIS_ORE:
      return "lapis ore";
    case BLOCK_LAPIS_BLOCK:
      return "lapis block";
    case BLOCK_DISPENSER:
      return "dispenser";
    case BLOCK_SANDSTONE:
      return "sandstone";
    case BLOCK_NOTE_BLOCK:
      return "note block";
    case BLOCK_BED:
      return "bed";
    case BLOCK_YELLOW_FLOWER:
      return "yellow flower";
    case BLOCK_RED_ROSE:
      return "red rose";
    case BLOCK_BROWN_MUSHROOM:
      return "brown mushroom";
    case BLOCK_RED_MUSHROOM:
      return "red mushroom";
    case BLOCK_GOLD_BLOCK:
      return "gold block";
    case BLOCK_IRON_BLOCK:
      return "iron block";
    case BLOCK_DOUBLE_STEP:
      return "double step";
    case BLOCK_STEP:
      return "step";
    case BLOCK_BRICK:
      return "brick";
    case BLOCK_TNT:
      return "tnt";
    case BLOCK_BOOKSHELF:
      return "bookshelf";
    case BLOCK_MOSSY_COBBLESTONE:
      return "mossy cobblestone";
    case BLOCK_OBSIDIAN:
      return "obsidian";
    case BLOCK_TORCH:
      return "torch";
    case BLOCK_FIRE:
      return "fire";
    case BLOCK_MOB_SPAWNER:
      return "mob spawner";
    case BLOCK_WOODEN_STAIRS:
      return "wooden stairs";
    case BLOCK_CHEST:
      return "chest";
    case BLOCK_REDSTONE_WIRE:
      return "redstone wire";
    case BLOCK_DIAMOND_ORE:
      return "diamond ore";
    case BLOCK_DIAMOND_BLOCK:
      return "diamond block";
    case BLOCK_WORKBENCH:
      return "workbench";
    case BLOCK_CROPS:
      return "crops";
    case BLOCK_SOIL:
      return "soil";
    case BLOCK_FURNACE:
      return "furnace";
    case BLOCK_BURNING_FURNACE:
      return "burning furnace";
    case BLOCK_SIGN_POST:
      return "sign (post)";
    case BLOCK_WOODEN_DOOR:
      return "wooden door";
    case BLOCK_LADDER:
      return "ladder";
    case BLOCK_MINECART_TRACKS:
      return "minecart track";
    case BLOCK_COBBLESTONE_STAIRS:
      return "cobblestone stairs";
    case BLOCK_WALL_SIGN:
      return "sign (wall)";
    case BLOCK_LEVER:
      return "lever";
    case BLOCK_STONE_PRESSURE_PLATE:
      return "stone pressure plate";
    case BLOCK_IRON_DOOR:
      return "iron door";
    case BLOCK_WOODEN_PRESSURE_PLATE:
      return "wooden pressure plate";
    case BLOCK_REDSTONE_ORE:
      return "redstone ore";
    case BLOCK_GLOWING_REDSTONE_ORE:
      return "glowing redstone ore";
    case BLOCK_REDSTONE_TORCH_OFF:
      return "redstone torch (off)";
    case BLOCK_REDSTONE_TORCH_ON:
      return "redstone torch (on)";
    case BLOCK_STONE_BUTTON:
      return "stone button";
    case BLOCK_SNOW:
      return "snow";
    case BLOCK_ICE:
      return "ice";
    case BLOCK_SNOW_BLOCK:
      return "snow block";
    case BLOCK_CACTUS:
      return "cactus";
    case BLOCK_CLAY:
      return "clay";
    case BLOCK_REED:
      return "reed";
    case BLOCK_JUKEBOX:
      return "jukebox";
    case BLOCK_FENCE:
      return "fence";
    case BLOCK_PUMPKIN:
      return "pumpkin";
    case BLOCK_NETHERSTONE:
      return "netherstone";
    case BLOCK_SLOW_SAND:
      return "slow sand";
    case BLOCK_GLOWSTONE:
      return "glowstone";
    case BLOCK_PORTAL:
      return "portal";
    case BLOCK_JACK_O_LANTERN:
      return "jack 'o lantern";
    case BLOCK_CAKE:
      return "cake";
    case BLOCK_REDSTONE_REPEATER_OFF:
      return "redstone repeater (off)";
    case BLOCK_REDSTONE_REPEATER_ON:
      return "redstone repeater (on)";
    case BLOCK_LOCKED_CHEST:
      return "locked chest";
    case BLOCK_WOOL:
      return "wool";
    default:
      return "Unknown block type";
  }
}

