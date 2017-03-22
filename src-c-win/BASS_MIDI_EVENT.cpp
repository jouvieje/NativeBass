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

JNIEXPORT jlong JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1new(JNIEnv *java_env, jclass jcls) {
	BASS_MIDI_EVENT *result_ = new BASS_MIDI_EVENT();
	CheckAllocation(java_env, result_);
	N2J_PTR2ADR(jresult, result_, BASS_MIDI_EVENT *);
	return jresult;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1delete(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	delete pointer;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1get_1event(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD result_ = pointer->event;
	return (jint)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1set_1event(JNIEnv *java_env, jclass jcls, jlong jpointer, jint jevent) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD event = (DWORD)jevent;
	pointer->event = event;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1get_1param(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD result_ = pointer->param;
	return (jint)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1set_1param(JNIEnv *java_env, jclass jcls, jlong jpointer, jint jparam) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD param = (DWORD)jparam;
	pointer->param = param;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1get_1chan(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD result_ = pointer->chan;
	return (jint)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1set_1chan(JNIEnv *java_env, jclass jcls, jlong jpointer, jint jchan) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD chan = (DWORD)jchan;
	pointer->chan = chan;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1get_1tick(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD result_ = pointer->tick;
	return (jint)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1set_1tick(JNIEnv *java_env, jclass jcls, jlong jpointer, jint jtick) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD tick = (DWORD)jtick;
	pointer->tick = tick;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1get_1pos(JNIEnv *java_env, jclass jcls, jlong jpointer) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD result_ = pointer->pos;
	return (jint)result_;
}

JNIEXPORT void JNICALL Java_jouvieje_bass_structures_StructureJNI_BASS_1MIDI_1EVENT_1set_1pos(JNIEnv *java_env, jclass jcls, jlong jpointer, jint jpos) {
	BASS_MIDI_EVENT *pointer = N2J_CAST(jpointer, BASS_MIDI_EVENT *);
	DWORD pos = (DWORD)jpos;
	pointer->pos = pos;
}



