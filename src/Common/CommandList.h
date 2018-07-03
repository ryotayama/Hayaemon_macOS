﻿//--------------------------------------------------------------------------
// CommandList.h : Command IDs
//--------------------------------------------------------------------------
#ifndef CommandListH
#define CommandListH

//--------------------------------------------------------------------------
// COMMAND ID
//--------------------------------------------------------------------------
typedef enum {
	// ファイルメニュー
		ID_SAVEFILE,
		ID_SAVEALLFILE,
	// 表示メニュー
		ID_TIMESLIDER,
		ID_EXPLORER,
		ID_SPEED,
		ID_FREQ,
		ID_PITCH,
		ID_VOLUME,
		ID_PAN,
		ID_EQ,
		ID_EQ20,
		ID_EQ25,
		ID_EQ31_5,
		ID_EQ40,
		ID_EQ50,
		ID_EQ63,
		ID_EQ80,
		ID_EQ100,
		ID_EQ125,
		ID_EQ160,
		ID_EQ200,
		ID_EQ250,
		ID_EQ315,
		ID_EQ400,
		ID_EQ500,
		ID_EQ630,
		ID_EQ800,
		ID_EQ1K,
		ID_EQ1_25K,
		ID_EQ1_6K,
		ID_EQ2K,
		ID_EQ2_5K,
		ID_EQ3_15K,
		ID_EQ4K,
		ID_EQ5K,
		ID_EQ6_3K,
		ID_EQ8K,
		ID_EQ10K,
		ID_EQ12_5K,
		ID_EQ16K,
		ID_EQ20K,
		ID_TAB,
		ID_PLAYLIST,
	// 再生メニュー
		ID_PLAY,
		ID_PAUSE,
		ID_STOP,
		ID_HEAD,
		ID_PREVMARKER,
		ID_PREV,
		ID_NEXTMARKER,
		ID_NEXT,
		ID_REWIND,
		ID_FORWARD,
		ID_SLOOP,
		ID_ALOOP,
		ID_RANDOM,
		ID_CONTINUE,
		ID_SAMEARTIST,
		ID_ABLOOP_A,
		ID_ABLOOP_B,
		ID_ABLOOP_A_SETTING,
		ID_ABLOOP_B_SETTING,
		ID_MARKERPLAY,
		ID_ADDMARKER,
		ID_DELETEMARKER,
		ID_COUNTLOOP,
		ID_INSTANTLOOP,
		ID_SETPOSITIONAUTO,
	// エフェクトメニュー
		ID_SPEEDDEC_0,
		ID_SPEEDDEC_1,
		ID_SPEEDDEC_2,
		ID_FREQDEC_0,
		ID_FREQDEC_1,
		ID_FREQDEC_2,
		ID_PITCHDEC_0,
		ID_PITCHDEC_1,
		ID_PITCHDEC_2,
		ID_REVERB_DEFAULT,
		ID_REVERB_CUSTOMIZE,
		ID_3DREVERB_DEFAULT,
		ID_3DREVERB_PADDEDCELL,
		ID_3DREVERB_ROOM,
		ID_3DREVERB_BATHROOM,
		ID_3DREVERB_LIVINGROOM,
		ID_3DREVERB_STONEROOM,
		ID_3DREVERB_AUDITORIUM,
		ID_3DREVERB_CONCERTHALL,
		ID_3DREVERB_CAVE,
		ID_3DREVERB_ARENA,
		ID_3DREVERB_HANGAR,
		ID_3DREVERB_CARPETEDHALLWAY,
		ID_3DREVERB_HALLWAY,
		ID_3DREVERB_STONECORRIDOR,
		ID_3DREVERB_ALLEY,
		ID_3DREVERB_FOREST,
		ID_3DREVERB_CITY,
		ID_3DREVERB_MOUNTAINS,
		ID_3DREVERB_QUARRY,
		ID_3DREVERB_PLAIN,
		ID_3DREVERB_PARKINGLOT,
		ID_3DREVERB_SEWERPIPE,
		ID_3DREVERB_UNDERWATER,
		ID_3DREVERB_SMALLROOM,
		ID_3DREVERB_MEDIUMROOM,
		ID_3DREVERB_LARGEROOM,
		ID_3DREVERB_MEDIUMHALL,
		ID_3DREVERB_LARGEHALL,
		ID_3DREVERB_PLATE,
		ID_3DREVERB_CUSTOMIZE,
		ID_DELAY_DEFAULT,
		ID_DELAY_SHORT,
		ID_DELAY_MEDIUM,
		ID_DELAY_LONG,
		ID_DELAY_STEREOSHORT,
		ID_DELAY_STEREOMEDIUM,
		ID_DELAY_STEREOLONG,
		ID_DELAY_MOUNTAIN,
		ID_DELAY_BIG,
		ID_DELAY_STEREOBIG,
		ID_DELAY_DOUBLING,
		ID_DELAY_DOUBLEKICK,
		ID_DELAY_CUSTOMIZE,
		ID_CHORUS_DEFAULT,
		ID_CHORUS_CUSTOMIZE,
		ID_COMPRESSOR_DEFAULT,
		ID_COMPRESSOR_CUSTOMIZE,
		ID_FLANGER_DEFAULT,
		ID_FLANGER_CUSTOMIZE,
		ID_GARGLE_DEFAULT,
		ID_GARGLE_CUSTOMIZE,
		ID_DISTORTION_DEFAULT,
		ID_DISTORTION_CUSTOMIZE,
		ID_RECORDNOISE,
		ID_WAVE,
		ID_NORMALIZE,
		ID_VOCALCANCEL,
		ID_REVERSE,
		ID_LOWBATTERY,
		ID_RECORD,
		ID_NOSENSE,
		ID_BASSCOPY,
		ID_CYMBALCOPY,
		ID_EARTRAINING,
		ID_MONORAL,
		ID_ONLYLEFT,
		ID_ONLYRIGHT,
		ID_CHANGELR,
		ID_RESETALL,
	// システムメニュー
		// 復元メニュー
			// 表示状態メニュー
				ID_RECOVERTIMESLIDERVISIBLE,
				ID_RECOVERSPEEDVISIBLE,
				ID_RECOVERFREQVISIBLE,
				ID_RECOVERPITCHVISIBLE,
				ID_RECOVERVOLUMEVISIBLE,
				ID_RECOVERPANVISIBLE,
				ID_RECOVEREQVISIBLE,
				ID_RECOVERLISTVISIBLE,
			// 再生モードメニュー
				ID_RECOVERSLOOP,
				ID_RECOVERALOOP,
				ID_RECOVERRANDOM,
				ID_RECOVERCONTINUE,
				ID_RECOVERINSTANTLOOP,
				ID_RECOVERSETPOSITIONAUTO,
				ID_RECOVERREVERSE,
				ID_RECOVERRECORD,
			ID_RECOVERWPOS,
			ID_RECOVERWSIZE,
			ID_RECOVERPLAYPOS,
			ID_RECOVERSPEED,
			ID_RECOVERFREQ,
			ID_RECOVERPITCH,
			ID_RECOVERVOLUME,
			ID_RECOVERPAN,
			ID_RECOVEREQ,
			ID_RECOVERLIST,
		ID_LIMIT,
		ID_TIMERPLAY,
		ID_PLAYRANGE,
		ID_PLAYPOSITION,
		ID_INCSPEED,
		ID_INCFREQ,
		ID_DECSPEED,
		ID_DECFREQ,
		ID_FADEOUTSTOP,
		ID_FADEOUTSTOP1SEC,
		ID_FADEOUTSTOP2SEC,
		ID_FADEOUTSTOP3SEC,
		ID_FADEOUTSTOP4SEC,
		ID_FADEOUTSTOP5SEC,
		ID_FADEOUTSTOP6SEC,
		ID_FADEOUTSTOP7SEC,
		ID_FADEOUTSTOP8SEC,
		ID_FADEOUTSTOP9SEC,
		ID_FADEOUTSTOP10SEC,
		ID_FADEOUTNEXT,
		ID_FADEOUTNEXT1SEC,
		ID_FADEOUTNEXT2SEC,
		ID_FADEOUTNEXT3SEC,
		ID_FADEOUTNEXT4SEC,
		ID_FADEOUTNEXT5SEC,
		ID_FADEOUTNEXT6SEC,
		ID_FADEOUTNEXT7SEC,
		ID_FADEOUTNEXT8SEC,
		ID_FADEOUTNEXT9SEC,
		ID_FADEOUTNEXT10SEC,
		ID_METRONOME,
		ID_TOPMOST,
		ID_COPYTIME,
	// プリセット
		ID_ADDPRESET,
		ID_DELETEPRESET,
		ID_PRESET,
} CMDID;

#endif // CommandListH
