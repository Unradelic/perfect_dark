#ifndef _IN_GAME_GAME_0B63B0_H
#define _IN_GAME_GAME_0B63B0_H
#include <ultra64.h>
#include "types.h"

u32 func0f0b63b0(void);
u32 func0f0b6470(void);
u32 func0f0b6534(void);
u32 func0f0b656c(void);
u32 func0f0b65a8(void);
void func0f0b65f8(void);
void func0f0b6764(void);
f32 func0f0b69d0(f32 arg0, struct coord *pos, s16 *rooms, struct prop *prop, s16 *spawnpads, s16 numspawnpads);
f32 func0f0b72a8(f32 arg0, struct coord *pos, s16 *rooms, struct prop *prop);
u32 func0f0b72dc(void);
void func0f0b77cc(void);
u32 func0f0b7c60(void);
void func0f0b802c(void);
void func0f0b85a0(f32 *floats, struct coord *pos);
u32 func0f0b85f8(void);
void func0f0b872c(s32 *bodynum, s32 *headnum, s32 arg2);
void func0f0b8ba0(void);
void func0f0b9538(void);
void func0f0b96e8(void);
void func0f0b9cbc(void);
void cameraDoAnimation(s16 anim_id);
u32 func0f0ba190(u32 arg0);
void func0f0ba29c(bool arg0);
f32 getVar8009de1c(void);
void currentPlayerSetZoomFovY(f32 fovy, f32 timemax);
f32 currentPlayerGetZoomFovY(void);
void func0f0ba8b0(f32 value);
f32 currentPlayerGetTeleportFovY(void);
void currentPlayerUpdateZoom(void);
void func0f0bace0(void);
void func0f0bad6c(void);
void currentPlayerPause(s32 mode);
void func0f0baf38(void);
Gfx *func0f0baf84(Gfx *gdl);
Gfx *fadeDraw(Gfx *gdl, u32 r, u32 g, u32 b, f32 frac);
Gfx *currentPlayerDrawFade(Gfx *gdl);
void func0f0bb42c(void);
void currentPlayerTickChrFade(void);
void func0f0bb69c(void);
void func0f0bb814(void);
u32 func0f0bbf14(void);
Gfx *hudRenderHealthBar(Gfx *gdl);
void currentPlayerSurroundWithExplosions(s32 arg0);
void func0f0bc120(void);
void func0f0bc3f0(void);
s16 func0f0bc44c(void);
s16 func0f0bc478(void);
u32 func0f0bc4c0(void);
s16 func0f0bc554(void);
s16 func0f0bc7ac(void);
s32 func0f0bcaa0(void);
s16 func0f0bce24(void);
f32 func0f0bd358(void);
void func0f0bd3c4(void);
void func0f0bd4e4(f32 *arg0);
u32 func0f0bd764(void);
void func0f0bd904(bool arg0);
u32 func0f0bfc7c(void);
u32 func0f0bffcc(void);
u32 func0f0c00cc(void);
Gfx *func0f0c0190(Gfx *gdl);
Gfx *func0f0c07c8(Gfx *gdl);
void currentPlayerDie(bool force);
void currentPlayerDieByShooter(u32 shooter, bool force);
u32 func0f0c160c(void);
f32 currentPlayerGetHealthBarHeightFrac(void);
void func0f0c1840(struct coord *pos, struct coord *up, struct coord *look, struct coord *pos2, s16 *rooms);
void func0f0c1ba4(struct coord *pos, struct coord *up, struct coord *look, struct coord *memcampos, s32 memcamroom);
void func0f0c1bd8(struct coord *pos, struct coord *up, struct coord *look);
void func0f0c1d20(void);
void func0f0c1e54(struct prop *prop, bool enable);
u32 func0f0c1f08(void);
void currentPlayerUpdatePerimInfo(void);
void propPlayerGetBbox(struct prop *prop, f32 *width, f32 *ymax, f32 *ymin);
f32 currentPlayerGetHealth(void);
f32 currentPlayerGetShieldFrac(void);
void currentPlayerSetShieldFrac(f32 shield);
s32 getMissionTime(void);
u32 func0f0c228c(struct prop *prop);
u32 func0f0c2364(void);
u32 func0f0c2a58(void);
u32 func0f0c32a0(void);
Gfx *currentPlayerLoadMatrix(Gfx *gdl);
u32 func0f0c3320(void);
void setTickMode(s32 tickmode);
void func0f0b9650(void);
void func0f0b9674(void);
void func0f0b9a20(void);
void func0f0b9afc(void);
void warpBondToPad(s16 pad_id);
void func0f0b9bac(u32 *cmd, s32 arg1, s32 arg2);
void func0f0b9c1c(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5);
void func0f0ba010(void);
void currentPlayerSetFadeColour(s32 r, s32 g, s32 b, f32 a);
void currentPlayerAdjustFade(f32 maxfadetime, s32 r, s32 g, s32 b, f32 frac);
void currentPlayerSetFadeFrac(f32 maxfadetime, f32 frac);
bool currentPlayerIsFadeComplete(void);
void currentPlayerStartChrFade(f32 duration60, f32 targetfrac);
void optionsSetHiRes(bool enable);
void currentPlayerAutoWalk(s16 aimpad, u8 walkspeed, u8 turnspeed, u8 lookup, u8 dist);
void currentPlayerLaunchSlayerRocket(struct weaponobj *rocket);
void currentPlayerSetGlobalDrawWorldOffset(s32 room);
void currentPlayerSetGlobalDrawCameraOffset(void);
bool currentPlayerIsHealthVisible(void);
void currentPlayerSetCameraMode(s32 mode);
void currentPlayerSetCamPropertiesWithRoom(struct coord *pos, struct coord *up, struct coord *look, s32 room);
void currentPlayerSetCamPropertiesWithoutRoom(struct coord *pos, struct coord *up, struct coord *look, s32 room);
void currentPlayerSetCamProperties(struct coord *pos, struct coord *up, struct coord *look, s32 room);
void currentPlayerClearMemCamRoom(void);

#endif
