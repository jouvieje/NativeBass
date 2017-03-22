/* DO NOT EDIT - AUTOGENERATED */
/**
 * 				NativeBass Project
 *
 * Want to use BASS (www.un4seen.com) in the Java language ? NativeBass is made for you.
 * Copyright � 2007-2011 J�r�me JOUVIE
 *
 * Created on 02 jul. 2007
 * @version file v1.1.1
 * @author J�r�me JOUVIE (Jouvieje)
 * @site   http://jerome.jouvie.free.fr/
 * @mail   jerome.jouvie@gmail.com
 * 
 * 
 * INTRODUCTION
 * BASS is an audio library for use in Windows and Mac OSX software.
 * Its purpose is to provide developers with the most powerful and
 * efficient (yet easy to use), sample, stream (MP3, MP2, MP1, OGG, WAV, AIFF,
 * custom generated, and more via add-ons), MOD music (XM, IT, S3M, MOD, MTM, UMX),
 * MO3 music (MP3/OGG compressed MODs),
 * and recording functions. All in a tiny DLL, under 100KB* in size.
 * 
 * BASS official web site :
 * 		http://www.un4seen.com/
 * 
 * 
 * GNU LESSER GENERAL PUBLIC LICENSE
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of the License,
 * or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the
 * Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA 
 */

#include "NativeBass.h"
#include "bass.h"
#include "bassenc.h"
#include "bassflac.h"
#include "bassmidi.h"
#include "bassmix.h"
#include "basswv.h"
#include "bass_aac.h"
#include "bass_ac3.h"
#include "bassalac.h"
#include "bass_fx.h"
#include "bass_mpc.h"
#include "bass_spx.h"
#include "Utils.h"
#include "Pointer.h"
#include "JavaObject.h"
#include "jouvieje_bass_structures_StructureJNI.h"
#include "CallbackManager.h"

JNIEXPORT jlong JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1new(JNIEnv *java_env, jclass jcls) {
	BASS_BFX_DAMP *result_ = new BASS_BFX_DAMP();
	CheckAllocation(java_env, result_);
	N2J_PTR2ADR(jresult, result_, BASS_BFX_DAMP *);
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1delete(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	delete pointer;
}

JNIEXPORT jfloat JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1get_1fTarget(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float result_ = pointer->fTarget;
	return (jfloat)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1set_1fTarget(JNIEnv *java_env, jclass jcls, jlong jpointer, jfloat jfTarget) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float fTarget = (float)jfTarget;
	pointer->fTarget = fTarget;
}

JNIEXPORT jfloat JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1get_1fQuiet(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float result_ = pointer->fQuiet;
	return (jfloat)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1set_1fQuiet(JNIEnv *java_env, jclass jcls, jlong jpointer, jfloat jfQuiet) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float fQuiet = (float)jfQuiet;
	pointer->fQuiet = fQuiet;
}

JNIEXPORT jfloat JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1get_1fRate(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float result_ = pointer->fRate;
	return (jfloat)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1set_1fRate(JNIEnv *java_env, jclass jcls, jlong jpointer, jfloat jfRate) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float fRate = (float)jfRate;
	pointer->fRate = fRate;
}

JNIEXPORT jfloat JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1get_1fGain(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float result_ = pointer->fGain;
	return (jfloat)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1set_1fGain(JNIEnv *java_env, jclass jcls, jlong jpointer, jfloat jfGain) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float fGain = (float)jfGain;
	pointer->fGain = fGain;
}

JNIEXPORT jfloat JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1get_1fDelay(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float result_ = pointer->fDelay;
	return (jfloat)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1set_1fDelay(JNIEnv *java_env, jclass jcls, jlong jpointer, jfloat jfDelay) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	float fDelay = (float)jfDelay;
	pointer->fDelay = fDelay;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1get_1lChannel(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	int result_ = pointer->lChannel;
	return (jint)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1BFX_1DAMP_1set_1lChannel(JNIEnv *java_env, jclass jcls, jlong jpointer, jint jlChannel) {
	BASS_BFX_DAMP *pointer = N2J_CAST(jpointer, BASS_BFX_DAMP *);
	int lChannel = (int)jlChannel;
	pointer->lChannel = lChannel;
}



