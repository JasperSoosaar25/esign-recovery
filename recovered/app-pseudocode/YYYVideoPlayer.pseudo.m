/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYVideoPlayer | class address: 0x100c7bf88
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYVideoPlayer dealloc] | 0x100065164 | ABI v16@0:8 */

/* Address: 0x100065164 | YYYVideoPlayer::YYYVideoPlayer__instance__dealloc | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoPlayer dealloc]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__dealloc(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010006518c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc2d50)(DAT_100e91080);
  return;
}



/* -[YYYVideoPlayer initWithUrlString:] | 0x100065aec | ABI @24@0:8@16 */

/* Address: 0x100065aec | YYYVideoPlayer::YYYVideoPlayer__instance__initWithUrlString_ | bytes: 40 */

/* Recovered runtime selector: -[YYYVideoPlayer initWithUrlString:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__initWithUrlString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100065b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc2e68)();
  return IVar1;
}



/* -[YYYVideoPlayer initWithUrl:] | 0x100065e88 | ABI @24@0:8@16 */

/* Address: 0x100065e88 | YYYVideoPlayer::YYYVideoPlayer__instance__initWithUrl_ | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoPlayer initWithUrl:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__initWithUrl_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100065eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc3050)();
  return IVar1;
}



/* -[YYYVideoPlayer init] | 0x1000662d4 | ABI @16@0:8 */

/* Address: 0x1000662d4 | YYYVideoPlayer::YYYVideoPlayer__instance__init | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoPlayer init]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__init(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000662fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc3148)();
  return IVar1;
}



/* -[YYYVideoPlayer resume] | 0x10006642c | ABI v16@0:8 */

/* Address: 0x10006642c | YYYVideoPlayer::YYYVideoPlayer__instance__resume | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoPlayer resume]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__resume(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100066444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc31c8)();
  return;
}



/* -[YYYVideoPlayer play] | 0x1000664fc | ABI v16@0:8 */

/* Address: 0x1000664fc | YYYVideoPlayer::YYYVideoPlayer__instance__play | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoPlayer play]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__play(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100066518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc3248)();
  return;
}



/* -[YYYVideoPlayer pause] | 0x1000665a4 | ABI v16@0:8 */

/* Address: 0x1000665a4 | YYYVideoPlayer::YYYVideoPlayer__instance__pause | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoPlayer pause]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

int YYYVideoPlayer::YYYVideoPlayer__instance__pause(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000665c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR_LAB_100cc3280)();
  return iVar1;
}



/* -[YYYVideoPlayer stop] | 0x100066778 | ABI v16@0:8 */

/* Address: 0x100066778 | YYYVideoPlayer::YYYVideoPlayer__instance__stop | bytes: 48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYVideoPlayer stop]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__stop(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::playerItem(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001000667a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc3360)(IVar1);
  return;
}



/* -[YYYVideoPlayer seekToTime:completionHandler:] | 0x1000669f8 | ABI v32@0:8d16@?24 */

/* Address: 0x1000669f8 | YYYVideoPlayer::YYYVideoPlayer__instance__seekToTime_completionHandler_ | bytes: 52 */

/* Recovered runtime selector: -[YYYVideoPlayer seekToTime:completionHandler:]
   Original ABI encoding: v32@0:8d16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__seekToTime_completionHandler_
               (ID param_1,SEL param_2,double param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100066a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc3500)();
  return;
}



/* -[YYYVideoPlayer seekToTime:] | 0x1000671ec | ABI v24@0:8d16 */

/* Address: 0x1000671ec | YYYVideoPlayer::YYYVideoPlayer__instance__seekToTime_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoPlayer seekToTime:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__seekToTime_(ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006720c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc3980)();
  return;
}



/* -[YYYVideoPlayer playerItemAddKVO] | 0x100067264 | ABI v16@0:8 */

/* Address: 0x100067264 | YYYVideoPlayer::YYYVideoPlayer__instance__playerItemAddKVO | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoPlayer playerItemAddKVO]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__playerItemAddKVO(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100067280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc39b8)();
  return;
}



/* -[YYYVideoPlayer observeValueForKeyPath:ofObject:change:context:] | 0x100067ac0 | ABI v48@0:8@16@24@32^v40 */

/* Address: 0x100067ac0 | YYYVideoPlayer::YYYVideoPlayer__instance__observeValueForKeyPath_ofObject_change_context_ | bytes: 72 */

/* Recovered runtime selector: -[YYYVideoPlayer observeValueForKeyPath:ofObject:change:context:]
   Original ABI encoding: v48@0:8@16@24@32^v40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000100067b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc3a68)();
  return;
}



/* -[YYYVideoPlayer monitoringPlayback:] | 0x1000685d0 | ABI v24@0:8@16 */

/* Address: 0x1000685d0 | YYYVideoPlayer::YYYVideoPlayer__instance__monitoringPlayback_ | bytes: 76 */

/* Recovered runtime selector: -[YYYVideoPlayer monitoringPlayback:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__monitoringPlayback_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100068618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_57_100cc3ed0)();
  return;
}



/* -[YYYVideoPlayer calculateDownloadProgress:] | 0x100068cd8 | ABI v24@0:8@16 */

/* Address: 0x100068cd8 | YYYVideoPlayer::YYYVideoPlayer__instance__calculateDownloadProgress_ | bytes: 52 */

/* Recovered runtime selector: -[YYYVideoPlayer calculateDownloadProgress:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__calculateDownloadProgress_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100068d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_d8_100cc42d8)();
  return;
}



/* -[YYYVideoPlayer bufferingSomeSecond] | 0x100068fe0 | ABI v16@0:8 */

/* Address: 0x100068fe0 | YYYVideoPlayer::YYYVideoPlayer__instance__bufferingSomeSecond | bytes: 60 */

/* Recovered runtime selector: -[YYYVideoPlayer bufferingSomeSecond]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__bufferingSomeSecond(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100069018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc44a0)();
  return;
}



/* -[YYYVideoPlayer addNotification] | 0x100069438 | ABI v16@0:8 */

/* Address: 0x100069438 | YYYVideoPlayer::YYYVideoPlayer__instance__addNotification | bytes: 52 */

/* Recovered runtime selector: -[YYYVideoPlayer addNotification]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__addNotification(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100069468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc46a8)();
  return;
}



/* -[YYYVideoPlayer appDidEnterBackground] | 0x100069588 | ABI v16@0:8 */

/* Address: 0x100069588 | YYYVideoPlayer::YYYVideoPlayer__instance__appDidEnterBackground | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoPlayer appDidEnterBackground]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__appDidEnterBackground(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000695a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc46c8)();
  return;
}



/* -[YYYVideoPlayer appDidEnterPlayGround] | 0x100069658 | ABI v16@0:8 */

/* Address: 0x100069658 | YYYVideoPlayer::YYYVideoPlayer__instance__appDidEnterPlayGround | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoPlayer appDidEnterPlayGround]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__appDidEnterPlayGround(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100069670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4758)();
  return;
}



/* -[YYYVideoPlayer playerItemDidPlayToEnd:] | 0x100069718 | ABI v24@0:8@16 */

/* Address: 0x100069718 | YYYVideoPlayer::YYYVideoPlayer__instance__playerItemDidPlayToEnd_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoPlayer playerItemDidPlayToEnd:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__playerItemDidPlayToEnd_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100069738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc47e8)();
  return;
}



/* -[YYYVideoPlayer setRate:] | 0x10006977c | ABI v20@0:8f16 */

/* Address: 0x10006977c | YYYVideoPlayer::YYYVideoPlayer__instance__setRate_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoPlayer setRate:]
   Original ABI encoding: v20@0:8f16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setRate_(ID param_1,SEL param_2,float param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4810)();
  return;
}



/* -[YYYVideoPlayer setState:] | 0x100069888 | ABI v24@0:8q16 */

/* Address: 0x100069888 | YYYVideoPlayer::YYYVideoPlayer__instance__setState_ | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoPlayer setState:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setState_(ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000698a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4878)();
  return;
}



/* -[YYYVideoPlayer setCurrent:] | 0x100069a4c | ABI v24@0:8d16 */

/* Address: 0x100069a4c | YYYVideoPlayer::YYYVideoPlayer__instance__setCurrent_ | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoPlayer setCurrent:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setCurrent_(ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100069a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4970)(0x100e91094);
  return;
}



/* -[YYYVideoPlayer setDuration:] | 0x100069c30 | ABI v24@0:8d16 */

/* Address: 0x100069c30 | YYYVideoPlayer::YYYVideoPlayer__instance__setDuration_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoPlayer setDuration:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setDuration_(ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100069c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4a48)();
  return;
}



/* -[YYYVideoPlayer player] | 0x10006a304 | ABI @16@0:8 */

/* Address: 0x10006a304 | YYYVideoPlayer::YYYVideoPlayer__instance__player | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer player]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__player(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc4ce8)();
  return IVar1;
}



/* -[YYYVideoPlayer setPlayer:] | 0x10006a330 | ABI v24@0:8@16 */

/* Address: 0x10006a330 | YYYVideoPlayer::YYYVideoPlayer__instance__setPlayer_ | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoPlayer setPlayer:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setPlayer_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4d18)();
  return;
}



/* -[YYYVideoPlayer playerItem] | 0x10006a394 | ABI @16@0:8 */

/* Address: 0x10006a394 | YYYVideoPlayer::YYYVideoPlayer__instance__playerItem | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer playerItem]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__playerItem(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc4d50)();
  return IVar1;
}



/* -[YYYVideoPlayer setPlayerItem:] | 0x10006a3b4 | ABI v24@0:8@16 */

/* Address: 0x10006a3b4 | YYYVideoPlayer::YYYVideoPlayer__instance__setPlayerItem_ | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoPlayer setPlayerItem:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setPlayerItem_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4d70)();
  return;
}



/* -[YYYVideoPlayer playerLayer] | 0x10006a410 | ABI @16@0:8 */

/* Address: 0x10006a410 | YYYVideoPlayer::YYYVideoPlayer__instance__playerLayer | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer playerLayer]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__playerLayer(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc4da0)();
  return IVar1;
}



/* -[YYYVideoPlayer setPlayerLayer:] | 0x10006a43c | ABI v24@0:8@16 */

/* Address: 0x10006a43c | YYYVideoPlayer::YYYVideoPlayer__instance__setPlayerLayer_ | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoPlayer setPlayerLayer:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setPlayerLayer_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4dc8)();
  return;
}



/* -[YYYVideoPlayer state] | 0x10006a4a0 | ABI q16@0:8 */

/* Address: 0x10006a4a0 | YYYVideoPlayer::YYYVideoPlayer__instance__state | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer state]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYVideoPlayer::YYYVideoPlayer__instance__state(ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100cc4e00)();
  return lVar1;
}



/* -[YYYVideoPlayer duration] | 0x10006a4b4 | ABI d16@0:8 */

/* Address: 0x10006a4b4 | YYYVideoPlayer::YYYVideoPlayer__instance__duration | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer duration]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYVideoPlayer::YYYVideoPlayer__instance__duration(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100cc4e10)();
  return dVar1;
}



/* -[YYYVideoPlayer current] | 0x10006a4e0 | ABI d16@0:8 */

/* Address: 0x10006a4e0 | YYYVideoPlayer::YYYVideoPlayer__instance__current | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer current]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYVideoPlayer::YYYVideoPlayer__instance__current(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100cc4e40)();
  return dVar1;
}



/* -[YYYVideoPlayer loadedProgress] | 0x10006a500 | ABI d16@0:8 */

/* Address: 0x10006a500 | YYYVideoPlayer::YYYVideoPlayer__instance__loadedProgress | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer loadedProgress]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYVideoPlayer::YYYVideoPlayer__instance__loadedProgress(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100cc4e58)();
  return dVar1;
}



/* -[YYYVideoPlayer setLoadedProgress:] | 0x10006a514 | ABI v24@0:8d16 */

/* Address: 0x10006a514 | YYYVideoPlayer::YYYVideoPlayer__instance__setLoadedProgress_ | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer setLoadedProgress:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setLoadedProgress_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4e68)();
  return;
}



/* -[YYYVideoPlayer rate] | 0x10006a534 | ABI f16@0:8 */

/* Address: 0x10006a534 | YYYVideoPlayer::YYYVideoPlayer__instance__rate | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer rate]
   Original ABI encoding: f16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

float YYYVideoPlayer::YYYVideoPlayer__instance__rate(ID param_1,SEL param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(code *)PTR_LAB_100cc4e90)();
  return fVar1;
}



/* -[YYYVideoPlayer url] | 0x10006a554 | ABI @16@0:8 */

/* Address: 0x10006a554 | YYYVideoPlayer::YYYVideoPlayer__instance__url | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer url]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__url(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc4ea8)();
  return IVar1;
}



/* -[YYYVideoPlayer setUrl:] | 0x10006a574 | ABI v24@0:8@16 */

/* Address: 0x10006a574 | YYYVideoPlayer::YYYVideoPlayer__instance__setUrl_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoPlayer setUrl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setUrl_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4ec8)();
  return;
}



/* -[YYYVideoPlayer resouerLoader] | 0x10006a608 | ABI @16@0:8 */

/* Address: 0x10006a608 | YYYVideoPlayer::YYYVideoPlayer__instance__resouerLoader | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer resouerLoader]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__resouerLoader(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc4f20)();
  return IVar1;
}



/* -[YYYVideoPlayer setResouerLoader:] | 0x10006a628 | ABI v24@0:8@16 */

/* Address: 0x10006a628 | YYYVideoPlayer::YYYVideoPlayer__instance__setResouerLoader_ | bytes: 40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYVideoPlayer setResouerLoader:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setResouerLoader_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4f38)(param_3);
  return;
}



/* -[YYYVideoPlayer playbackTimeObserver] | 0x10006a68c | ABI @16@0:8 */

/* Address: 0x10006a68c | YYYVideoPlayer::YYYVideoPlayer__instance__playbackTimeObserver | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer playbackTimeObserver]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__instance__playbackTimeObserver(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc4f68)();
  return IVar1;
}



/* -[YYYVideoPlayer setPlaybackTimeObserver:] | 0x10006a6ac | ABI v24@0:8@16 */

/* Address: 0x10006a6ac | YYYVideoPlayer::YYYVideoPlayer__instance__setPlaybackTimeObserver_ | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoPlayer setPlaybackTimeObserver:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setPlaybackTimeObserver_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4f90)();
  return;
}



/* -[YYYVideoPlayer isBuffering] | 0x10006a708 | ABI B16@0:8 */

/* Address: 0x10006a708 | YYYVideoPlayer::YYYVideoPlayer__instance__isBuffering | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer isBuffering]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoPlayer::YYYVideoPlayer__instance__isBuffering(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cc4fb8)((int)param_1);
  return bVar1;
}



/* -[YYYVideoPlayer setBuffering:] | 0x10006a728 | ABI v20@0:8B16 */

/* Address: 0x10006a728 | YYYVideoPlayer::YYYVideoPlayer__instance__setBuffering_ | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer setBuffering:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setBuffering_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc4fd8)(param_1,param_2,param_3);
  return;
}



/* -[YYYVideoPlayer isPauseByUser] | 0x10006a764 | ABI B16@0:8 */

/* Address: 0x10006a764 | YYYVideoPlayer::YYYVideoPlayer__instance__isPauseByUser | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer isPauseByUser]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoPlayer::YYYVideoPlayer__instance__isPauseByUser(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cc5010)((int)param_1);
  return bVar1;
}



/* -[YYYVideoPlayer setPauseByUser:] | 0x10006a778 | ABI v20@0:8B16 */

/* Address: 0x10006a778 | YYYVideoPlayer::YYYVideoPlayer__instance__setPauseByUser_ | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoPlayer setPauseByUser:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance__setPauseByUser_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc5018)(param_1,param_2,param_3);
  return;
}



/* -[YYYVideoPlayer .cxx_destruct] | 0x10006a78c | ABI v16@0:8 */

/* Address: 0x10006a78c | YYYVideoPlayer::YYYVideoPlayer__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoPlayer .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoPlayer::YYYVideoPlayer__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010006a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cc5028)();
  return;
}



/* +[YYYVideoPlayer playerWithUrlString:] | 0x1000659b8 | ABI @24@0:8@16 */

/* Address: 0x1000659b8 | YYYVideoPlayer::YYYVideoPlayer__class__playerWithUrlString_ | bytes: 36 */

/* Recovered runtime selector: +[YYYVideoPlayer playerWithUrlString:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__class__playerWithUrlString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000659d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc2de8)();
  return IVar1;
}



/* +[YYYVideoPlayer playerWithUrl:] | 0x100065a84 | ABI @24@0:8@16 */

/* Address: 0x100065a84 | YYYVideoPlayer::YYYVideoPlayer__class__playerWithUrl_ | bytes: 60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: +[YYYVideoPlayer playerWithUrl:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoPlayer::YYYVideoPlayer__class__playerWithUrl_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  objc_stub::FUN_10094a240(IVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000100065abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cc2e50)();
  return IVar1;
}



/* +[YYYVideoPlayer automaticallyNotifiesObserversForKey:] | 0x100069e98 | ABI B24@0:8@16 */

/* Address: 0x100069e98 | YYYVideoPlayer::YYYVideoPlayer__class__automaticallyNotifiesObserversForKey_ | bytes: 36 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: +[YYYVideoPlayer automaticallyNotifiesObserversForKey:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoPlayer::YYYVideoPlayer__class__automaticallyNotifiesObserversForKey_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100069eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cc4b40)(param_3);
  return bVar1;
}


