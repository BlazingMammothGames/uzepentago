/*	The Uzebox Implementation of Pentago
	Copyright 2010, Kenton Hamaluik

	This file is part of The Uzebox Implementation of Pentago.

    The Uzebox Implementation of Pentago is free software: you can redistribute
	it and/or modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.

    The Uzebox Implementation of Pentago is distributed in the hope that it
	will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with The Uzebox Implementation of Pentago.  If not, see
	<http://www.gnu.org/licenses/>.
*/

/*
 * Transformation file: screen.xml
 * Source image: screen.png
 * Tile width: 8px
 * Tile height: 8px
 */
#define MAP_EMPTYSUPER_WIDTH 12
#define MAP_EMPTYSUPER_HEIGHT 12
const char map_emptySuper[] PROGMEM ={
12,12
,0x15,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x17,0x1b,0x1c,0x1d,0x1e,0x1e,0x1c,0x1d,0x1e
,0x1e,0x1c,0x1d,0x1f,0x1b,0x26,0x27,0x1e,0x1e,0x26,0x27,0x1e,0x1e,0x26,0x27,0x1f,0x1b,0x1e,0x1e,0x1e
,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1f,0x1b,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1f
,0x1b,0x1c,0x1d,0x1e,0x1e,0x1c,0x1d,0x1e,0x1e,0x1c,0x1d,0x1f,0x1b,0x26,0x27,0x1e,0x1e,0x26,0x27,0x1e
,0x1e,0x26,0x27,0x1f,0x1b,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1f,0x1b,0x1e,0x1e,0x1e
,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1e,0x1f,0x1b,0x1c,0x1d,0x1e,0x1e,0x1c,0x1d,0x1e,0x1e,0x1c,0x1d,0x1f
,0x1b,0x26,0x27,0x1e,0x1e,0x26,0x27,0x1e,0x1e,0x26,0x27,0x1f,0x34,0x35,0x35,0x35,0x35,0x35,0x35,0x35
,0x35,0x35,0x35,0x36};

#define MAP_EMPTYBALL_WIDTH 2
#define MAP_EMPTYBALL_HEIGHT 2
const char map_emptyBall[] PROGMEM ={
2,2
,0x1c,0x1d,0x26,0x27};

#define MAP_BLACKBALL_WIDTH 2
#define MAP_BLACKBALL_HEIGHT 2
const char map_blackBall[] PROGMEM ={
2,2
,0x21,0x22,0x28,0x29};

#define MAP_WHITEBALL_WIDTH 2
#define MAP_WHITEBALL_HEIGHT 2
const char map_whiteBall[] PROGMEM ={
2,2
,0x23,0x24,0x2a,0x2b};

#define MAP_BLACKBALLHL_WIDTH 2
#define MAP_BLACKBALLHL_HEIGHT 2
const char map_blackBallHl[] PROGMEM ={
2,2
,0x2c,0x2d,0x30,0x31};

#define MAP_WHITEBALLHL_WIDTH 2
#define MAP_WHITEBALLHL_HEIGHT 2
const char map_whiteBallHl[] PROGMEM ={
2,2
,0x2e,0x2f,0x32,0x33};

#define MAP_PENTAGO_WIDTH 8
#define MAP_PENTAGO_HEIGHT 1
const char map_pentago[] PROGMEM ={
8,1
,0xd,0xe,0xf,0x10,0x11,0x12,0x13,0x14};

#define MAP_STATUS_WIDTH 24
#define MAP_STATUS_HEIGHT 1
const char map_status[] PROGMEM ={
24,1
,0xd,0x2,0x4e,0x1,0x1,0x3f,0x1,0x1,0x3f,0x1,0x1,0x0,0x0,0xd,0x3,0x4e,0x1,0x1,0x3f,0x1
,0x1,0x3f,0x1,0x1};

/*#define MAP_NUMBERS_WIDTH 10
#define MAP_NUMBERS_HEIGHT 1
const char map_numbers[] PROGMEM ={
10,1
,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa};*/
#define TILE_NUMBERS_OFFSET	(0x01)

/*#define MAP_LEFTARROW_WIDTH 1
#define MAP_LEFTARROW_HEIGHT 1
const char map_leftArrow[] PROGMEM ={
1,1
,0xb};*/
#define TILE_LEFTARROW	(0x0b)

/*#define MAP_LEFTARROW_WIDTH 1
#define MAP_LEFTARROW_HEIGHT 1
const char map_leftArrow[] PROGMEM ={
1,1
,0xc};*/
#define TILE_RIGHTARROW	(0x0c)

/*#define MAP_PLAYERUNDERLINE_WIDTH 2
#define MAP_PLAYERUNDERLINE_HEIGHT 1
const char map_playerUnderline[] PROGMEM ={
2,1
,0x4f,0x4f};*/
#define TILE_PLAYER_UNDERLINE	(0x4f)

#define MAP_ROTATEMENU_WIDTH 10
#define MAP_ROTATEMENU_HEIGHT 6
const char map_rotateMenu[] PROGMEM ={
10,6
,0x3a,0x3b,0x3b,0x3b,0x3b,0x3b,0x3b,0x3b,0x3b,0x3c,0x3d,0x3e,0x13,0x10,0x11,0x10,0xe,0x3f,0x0,0x40
,0x3d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x3d,0x0,0x46,0x0,0x0,0x0,0x0,0x47,0x0,0x40
,0x3d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x4b,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4d};

#define MAP_PAUSEMENU_WIDTH 10
#define MAP_PAUSEMENU_HEIGHT 6
const char map_pauseMenu[] PROGMEM ={
10,6
,0x3a,0x3b,0x3b,0x3b,0x3b,0x3b,0x3b,0x3b,0x3b,0x3c,0x3d,0x0,0xd,0x11,0x41,0x42,0xe,0x43,0x0,0x40
,0x3d,0x0,0x0,0x44,0xd,0x0,0x45,0x0,0x0,0x40,0x3d,0x0,0x3e,0xe,0x10,0x41,0x48,0xf,0x0,0x40
,0x3d,0x0,0x0,0x49,0x41,0x4a,0x10,0x0,0x0,0x40,0x4b,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4d};

/*#define MAP_BORDERTL_WIDTH 1
#define MAP_BORDERTL_HEIGHT 1
const char map_borderTl[] PROGMEM ={
1,1
,0x15};*/
#define MAP_BORDERTL	(0x15)

/*#define MAP_BORDERT_WIDTH 1
#define MAP_BORDERT_HEIGHT 1
const char map_borderT[] PROGMEM ={
1,1
,0x16};*/
#define MAP_BORDERT		(0x16)

/*#define MAP_BORDERTR_WIDTH 1
#define MAP_BORDERTR_HEIGHT 1
const char map_borderTr[] PROGMEM ={
1,1
,0x17};*/
#define MAP_BORDERTR	(0x17)

/*#define MAP_BORDERR_WIDTH 1
#define MAP_BORDERR_HEIGHT 1
const char map_borderR[] PROGMEM ={
1,1
,0x1f};*/
#define MAP_BORDERR		(0x1f)

/*#define MAP_BORDERBR_WIDTH 1
#define MAP_BORDERBR_HEIGHT 1
const char map_borderBr[] PROGMEM ={
1,1
,0x36};*/
#define MAP_BORDERBR	(0x36)

/*#define MAP_BORDERB_WIDTH 1
#define MAP_BORDERB_HEIGHT 1
const char map_borderB[] PROGMEM ={
1,1
,0x35};*/
#define MAP_BORDERB		(0x35)

/*#define MAP_BORDERBL_WIDTH 1
#define MAP_BORDERBL_HEIGHT 1
const char map_borderBl[] PROGMEM ={
1,1
,0x34};*/
#define MAP_BORDERBL	(0x34)

/*#define MAP_BORDERL_WIDTH 1
#define MAP_BORDERL_HEIGHT 1
const char map_borderL[] PROGMEM ={
1,1
,0x1b};*/
#define MAP_BORDERL		(0x1b)

/*#define MAP_BORDERTLHL_WIDTH 1
#define MAP_BORDERTLHL_HEIGHT 1
const char map_borderTlHl[] PROGMEM ={
1,1
,0x18};*/
#define MAP_BORDERTLHL	(0x18)

/*#define MAP_BORDERTHL_WIDTH 1
#define MAP_BORDERTHL_HEIGHT 1
const char map_borderTHl[] PROGMEM ={
1,1
,0x19};*/
#define MAP_BORDERTHL	(0x19)

/*#define MAP_BORDERTRHL_WIDTH 1
#define MAP_BORDERTRHL_HEIGHT 1
const char map_borderTrHl[] PROGMEM ={
1,1
,0x1a};*/
#define MAP_BORDERTRHL	(0x1a)

/*#define MAP_BORDERRHL_WIDTH 1
#define MAP_BORDERRHL_HEIGHT 1
const char map_borderRHl[] PROGMEM ={
1,1
,0x25};*/
#define MAP_BORDERRHL	(0x25)

/*#define MAP_BORDERBRHL_WIDTH 1
#define MAP_BORDERBRHL_HEIGHT 1
const char map_borderBrHl[] PROGMEM ={
1,1
,0x39};*/
#define MAP_BORDERBRHL	(0x39)

/*#define MAP_BORDERBHL_WIDTH 1
#define MAP_BORDERBHL_HEIGHT 1
const char map_borderBHl[] PROGMEM ={
1,1
,0x38};*/
#define MAP_BORDERBHL	(0x38)

/*#define MAP_BORDERBLHL_WIDTH 1
#define MAP_BORDERBLHL_HEIGHT 1
const char map_borderBlHl[] PROGMEM ={
1,1
,0x37};*/
#define MAP_BORDERBLHL	(0x37)

/*#define MAP_BORDERLHL_WIDTH 1
#define MAP_BORDERLHL_HEIGHT 1
const char map_borderLHl[] PROGMEM ={
1,1
,0x20};*/
#define MAP_BORDERLHL	(0x20)

#define TILES_SCREEN_SIZE 80
const char tiles_screen[] PROGMEM={
 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:0
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:1
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:2
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:3
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:4
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:5
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:6
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:7
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:8
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:9
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:10
, 0x48, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:11
, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:12
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:13
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:14
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:15
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:16
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:17
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48		 //tile:18
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:19
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:20
, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:21
, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:22
, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0		 //tile:23
, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:24
, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:25
, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29		 //tile:26
, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:27
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x1c, 0x1c, 0x1c, 0x6e, 0x6e, 0x0, 0x1c, 0x1c, 0x1c, 0x64, 0x1c, 0x6e, 0x0, 0x1c, 0x1c, 0x1c, 0x64, 0x1c, 0x64, 0x6e, 0x0, 0x1c, 0x5c, 0x24, 0x1c, 0x24, 0x1c, 0x0, 0x1c, 0x24, 0x1c, 0x5c, 0x64, 0x5c, 0x24, 0x0, 0x5c, 0x1c, 0x64, 0x1c, 0x24, 0x24, 0x5d, 0x0, 0x1c, 0x64, 0x1c, 0x24, 0x5c, 0x65, 0x24		 //tile:28
, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x1c, 0x64, 0x1c, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x64, 0x1c, 0x64, 0x25, 0x64, 0x0, 0x6e, 0x6e, 0x1c, 0x64, 0x25, 0x64, 0x24, 0x65, 0x0, 0x6e, 0x65, 0x24, 0x64, 0x65, 0x65, 0x65, 0x0, 0x6e, 0x64, 0x65, 0x25, 0x64, 0x25, 0x65, 0x65, 0x0, 0x24, 0x25, 0x64, 0x65, 0x65, 0x6d, 0x65, 0x0, 0x65, 0x64, 0x65, 0x25, 0x65, 0x65, 0x65, 0x0		 //tile:29
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:30
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0		 //tile:31
, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:32
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x49, 0x9, 0x49, 0x6e, 0x6e, 0x0, 0x52, 0x49, 0x12, 0x49, 0x52, 0x6e, 0x0, 0x51, 0x9, 0x4a, 0x9, 0x49, 0x9, 0x6e, 0x0, 0x4a, 0x9, 0xff, 0xff, 0x9, 0x49, 0x0, 0x49, 0x11, 0x49, 0xff, 0x49, 0x9, 0x9, 0x0, 0x11, 0x4a, 0x49, 0x9, 0x9, 0x49, 0x49, 0x0, 0x4a, 0x49, 0x9, 0x9, 0x49, 0x9, 0x9		 //tile:33
, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x9, 0x49, 0x9, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x9, 0x49, 0x9, 0x49, 0x9, 0x0, 0x6e, 0x6e, 0x49, 0x9, 0x49, 0x9, 0x9, 0x9, 0x0, 0x6e, 0x9, 0x9, 0x9, 0x49, 0x9, 0x40, 0x0, 0x6e, 0x49, 0x49, 0x9, 0x9, 0x1, 0x9, 0x8, 0x0, 0x9, 0x9, 0x41, 0x8, 0x49, 0x0, 0x1, 0x0, 0x9, 0x9, 0x8, 0x1, 0x8, 0x1, 0x8, 0x0		 //tile:34
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0xff, 0xff, 0xff, 0x6e, 0x6e, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6e, 0x0, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf7, 0x6e, 0x0, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xfe, 0x0, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf7, 0xbe, 0x0, 0xff, 0xff, 0xf6, 0xff, 0xf7, 0xfe, 0xf7, 0x0, 0xff, 0xff, 0xff, 0xf7, 0xfe, 0xb7, 0xf6		 //tile:35
, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0xff, 0xff, 0xff, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0x0, 0x6e, 0x6e, 0xfe, 0xf7, 0xbf, 0xf6, 0xb6, 0xf6, 0x0, 0x6e, 0xf7, 0xbe, 0xf6, 0xf6, 0xf6, 0xb6, 0x0, 0x6e, 0xf6, 0xf6, 0xb6, 0xf6, 0xb6, 0xf6, 0xb6, 0x0, 0xbe, 0xf7, 0xf6, 0xb6, 0xf6, 0xb6, 0xf6, 0x0, 0xf6, 0xf6, 0xb6, 0xf6, 0xb6, 0xf6, 0xad, 0x0		 //tile:36
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29		 //tile:37
, 0x0, 0x24, 0x1c, 0x64, 0x65, 0x24, 0x65, 0x64, 0x0, 0x5c, 0x24, 0x1c, 0x65, 0x24, 0x65, 0x25, 0x0, 0x25, 0x64, 0x65, 0x24, 0x65, 0x65, 0x64, 0x6e, 0x0, 0x64, 0x25, 0x64, 0x65, 0x25, 0x65, 0x6e, 0x0, 0x25, 0x64, 0x65, 0x25, 0x65, 0x65, 0x6e, 0x6e, 0x0, 0x65, 0x65, 0x65, 0x6d, 0x65, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x65, 0x65, 0x6d, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0		 //tile:38
, 0x65, 0x25, 0x65, 0x65, 0x6d, 0x65, 0x6d, 0x0, 0x65, 0x65, 0x6d, 0x65, 0x65, 0x6d, 0x65, 0x0, 0x65, 0x65, 0x65, 0x6d, 0x65, 0x6d, 0x6d, 0x0, 0x2d, 0x65, 0x6d, 0x65, 0x6d, 0x6d, 0x0, 0x6e, 0x65, 0x6d, 0x65, 0x6d, 0x6d, 0x66, 0x0, 0x6e, 0x6d, 0x65, 0x6d, 0x6e, 0x6d, 0x0, 0x6e, 0x6e, 0x65, 0x6d, 0x6d, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:39
, 0x0, 0x9, 0x9, 0x49, 0x49, 0x9, 0x49, 0x9, 0x0, 0x49, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x0, 0x9, 0x49, 0x49, 0x49, 0x9, 0x40, 0x9, 0x6e, 0x0, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x6e, 0x0, 0x49, 0x9, 0x49, 0x0, 0x40, 0x1, 0x6e, 0x6e, 0x0, 0x9, 0x0, 0x9, 0x9, 0x0, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x8, 0x0, 0x8, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0		 //tile:40
, 0x49, 0x0, 0x49, 0x0, 0x1, 0x8, 0x0, 0x0, 0x0, 0x9, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0, 0x49, 0x0, 0x9, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6e, 0x8, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0, 0x6e, 0x1, 0x8, 0x1, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:41
, 0x0, 0xff, 0xf6, 0xfe, 0xb6, 0xf6, 0xf6, 0xf6, 0x0, 0xff, 0xf7, 0xff, 0xf6, 0xbf, 0xf6, 0xb6, 0x0, 0xf6, 0xfe, 0xb6, 0xf6, 0xf6, 0xb6, 0xf6, 0x6e, 0x0, 0xb6, 0xf7, 0xf6, 0xb6, 0xf6, 0xf6, 0x6e, 0x0, 0xf6, 0xf6, 0xb6, 0xf6, 0xb6, 0xb6, 0x6e, 0x6e, 0x0, 0xf6, 0xb6, 0xf6, 0xb6, 0xed, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0xad, 0xf6, 0xb6, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0		 //tile:42
, 0xb6, 0xb6, 0xf6, 0xb6, 0xf5, 0xae, 0xb5, 0x0, 0xf6, 0xf6, 0xb6, 0xee, 0xb6, 0xed, 0xae, 0x0, 0xb6, 0xb6, 0xf6, 0xb5, 0xae, 0xb5, 0xad, 0x0, 0xb6, 0xf6, 0xad, 0xae, 0xf5, 0xad, 0x0, 0x6e, 0xed, 0xad, 0xb6, 0xed, 0xad, 0xad, 0x0, 0x6e, 0xb6, 0xed, 0xad, 0xb5, 0xae, 0x0, 0x6e, 0x6e, 0xad, 0xb6, 0xad, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:43
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x49, 0x9, 0x49, 0x6e, 0x6e, 0x29, 0x52, 0x49, 0x12, 0x49, 0x52, 0x6e, 0x29, 0x51, 0x9, 0x4a, 0x9, 0x49, 0x9, 0x6e, 0x29, 0x4a, 0x9, 0xff, 0xff, 0x9, 0x49, 0x29, 0x49, 0x11, 0x49, 0xff, 0x49, 0x9, 0x9, 0x29, 0x11, 0x4a, 0x49, 0x9, 0x9, 0x49, 0x49, 0x29, 0x4a, 0x49, 0x9, 0x9, 0x49, 0x9, 0x9		 //tile:44
, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x9, 0x49, 0x9, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x9, 0x49, 0x9, 0x49, 0x9, 0x29, 0x6e, 0x6e, 0x49, 0x9, 0x49, 0x9, 0x9, 0x9, 0x29, 0x6e, 0x9, 0x9, 0x9, 0x49, 0x9, 0x40, 0x29, 0x6e, 0x49, 0x49, 0x9, 0x9, 0x1, 0x9, 0x8, 0x29, 0x9, 0x9, 0x41, 0x8, 0x49, 0x0, 0x1, 0x29, 0x9, 0x9, 0x8, 0x1, 0x8, 0x1, 0x8, 0x29		 //tile:45
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0xff, 0xff, 0xff, 0x6e, 0x6e, 0x29, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6e, 0x29, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf7, 0x6e, 0x29, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xfe, 0x29, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf7, 0xbe, 0x29, 0xff, 0xff, 0xf6, 0xff, 0xf7, 0xfe, 0xf7, 0x29, 0xff, 0xff, 0xff, 0xf7, 0xfe, 0xb7, 0xf6		 //tile:46
, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0xff, 0xff, 0xff, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0x29, 0x6e, 0x6e, 0xfe, 0xf7, 0xbf, 0xf6, 0xb6, 0xf6, 0x29, 0x6e, 0xf7, 0xbe, 0xf6, 0xf6, 0xf6, 0xb6, 0x29, 0x6e, 0xf6, 0xf6, 0xb6, 0xf6, 0xb6, 0xf6, 0xb6, 0x29, 0xbe, 0xf7, 0xf6, 0xb6, 0xf6, 0xb6, 0xf6, 0x29, 0xf6, 0xf6, 0xb6, 0xf6, 0xb6, 0xf6, 0xad, 0x29		 //tile:47
, 0x29, 0x9, 0x9, 0x49, 0x49, 0x9, 0x49, 0x9, 0x29, 0x49, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x29, 0x9, 0x49, 0x49, 0x49, 0x9, 0x40, 0x9, 0x6e, 0x29, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x6e, 0x29, 0x49, 0x9, 0x49, 0x0, 0x40, 0x1, 0x6e, 0x6e, 0x29, 0x9, 0x0, 0x9, 0x9, 0x0, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x8, 0x0, 0x8, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29		 //tile:48
, 0x49, 0x0, 0x49, 0x0, 0x1, 0x8, 0x0, 0x29, 0x0, 0x9, 0x0, 0x9, 0x0, 0x0, 0x0, 0x29, 0x49, 0x0, 0x9, 0x0, 0x9, 0x0, 0x0, 0x29, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0, 0x29, 0x6e, 0x8, 0x0, 0x0, 0x8, 0x0, 0x0, 0x29, 0x6e, 0x1, 0x8, 0x1, 0x0, 0x0, 0x29, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:49
, 0x29, 0xff, 0xf6, 0xfe, 0xb6, 0xf6, 0xf6, 0xf6, 0x29, 0xff, 0xf7, 0xff, 0xf6, 0xbf, 0xf6, 0xb6, 0x29, 0xf6, 0xfe, 0xb6, 0xf6, 0xf6, 0xb6, 0xf6, 0x6e, 0x29, 0xb6, 0xf7, 0xf6, 0xb6, 0xf6, 0xf6, 0x6e, 0x29, 0xf6, 0xf6, 0xb6, 0xf6, 0xb6, 0xb6, 0x6e, 0x6e, 0x29, 0xf6, 0xb6, 0xf6, 0xb6, 0xed, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0xad, 0xf6, 0xb6, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29		 //tile:50
, 0xb6, 0xb6, 0xf6, 0xb6, 0xf5, 0xae, 0xb5, 0x29, 0xf6, 0xf6, 0xb6, 0xee, 0xb6, 0xed, 0xae, 0x29, 0xb6, 0xb6, 0xf6, 0xb5, 0xae, 0xb5, 0xad, 0x29, 0xb6, 0xf6, 0xad, 0xae, 0xf5, 0xad, 0x29, 0x6e, 0xed, 0xad, 0xb6, 0xed, 0xad, 0xad, 0x29, 0x6e, 0xb6, 0xed, 0xad, 0xb5, 0xae, 0x29, 0x6e, 0x6e, 0xad, 0xb6, 0xad, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:51
, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0		 //tile:52
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0		 //tile:53
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0		 //tile:54
, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29		 //tile:55
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29		 //tile:56
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29		 //tile:57
, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0xff, 0xff, 0xff, 0x6e, 0x6e, 0x6e, 0xff, 0xff, 0x48, 0x48, 0x48, 0x6e, 0x6e, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x6e, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x6e, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48		 //tile:58
, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:59
, 0xff, 0xff, 0xff, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x48, 0x48, 0x48, 0xff, 0xff, 0x6e, 0x6e, 0x6e, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0x6e, 0x6e, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0x6e, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0x6e, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff		 //tile:60
, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48		 //tile:61
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:62
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:63
, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff		 //tile:64
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:65
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:66
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:67
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:68
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:69
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:70
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:71
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:72
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0xff, 0xff, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:73
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:74
, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x6e, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x6e, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x6e, 0x6e, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x6e, 0x6e, 0x6e, 0xff, 0xff, 0x48, 0x48, 0x48, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0xff, 0xff, 0xff		 //tile:75
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff		 //tile:76
, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0xff, 0x48, 0x48, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0xff, 0x6e, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0x6e, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0x6e, 0x6e, 0x48, 0x48, 0x48, 0xff, 0xff, 0x6e, 0x6e, 0x6e, 0xff, 0xff, 0xff, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e		 //tile:77
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:78
, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48		 //tile:79
};