/*
   Copyright (c) 2011, The Mineserver Project
   All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
  * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
  * Neither the name of the The Mineserver Project nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _MAPGEN_H
#define _MAPGEN_H

#ifdef LIBNOISE
#include <libnoise/noise.h>
#else
#include <noise/noise.h>
#endif

#include "cavegen.h"
#include "map.h"

class MapGen
{
public:
  MapGen();
  virtual ~MapGen() { }
  virtual void init(int seed);
  virtual void re_init(int seed); // Used when generating multiple maps
  virtual void generateChunk(int x, int z, int map);

private:
  std::vector<uint8_t> blocks;
  std::vector<uint8_t> addblocks;
  std::vector<uint8_t> blockdata;
  std::vector<uint8_t> skylight;
  std::vector<uint8_t> blocklight;
  std::vector<int32_t> heightmap;

  int seaLevel;

  bool addTrees;

  bool expandBeaches;
  int beachExtent;
  int beachHeight;

  bool addOre;
  bool addCaves;
  bool winterEnabled;

  virtual void generateFlatgrass(int x, int z, int map);
  virtual void generateWithNoise(int x, int z, int map);

  virtual void ExpandBeaches(int x, int z, int map);
  virtual void AddTrees(int x, int z, int map);

  virtual void AddOre(int x, int z, int map, uint8_t type);
  virtual void AddDeposit(int x, int y, int z, int map, uint8_t block, int minDepoSize, int maxDepoSize, sChunk* chunk);

  CaveGen cave;

  // Heightmap composition
  noise::module::RidgedMulti ridgedMultiNoise;

  // ##### TREE GEN #####

  noise::module::Billow treenoise;
  // ##### END TREE GEN ####

  /*noise::module::ScaleBias perlinBiased;

  noise::module::Perlin baseFlatTerrain;
  noise::module::ScaleBias flatTerrain;

  noise::module::Perlin seaFloor;
  noise::module::ScaleBias seaBias;

  noise::module::Perlin terrainType;

  noise::module::Perlin seaControl;

  noise::module::Select seaTerrain;
  noise::module::Select finalTerrain;*/
};


#endif
