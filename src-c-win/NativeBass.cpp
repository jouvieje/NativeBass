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
#include "CallbackManager.h"
#include "jouvieje_bass_BassInit.h"
#include "jouvieje_bass_BassJNI.h"

#ifdef NATIVE2JAVA_WIN_32
#pragma comment(lib, "lib32\\bass.lib")
#pragma comment(lib, "lib32\\bass_spx.lib")
#pragma comment(lib, "lib32\\bass_aac.lib")
#pragma comment(lib, "lib32\\bass_ac3.lib")
#pragma comment(lib, "lib32\\bass_alac.lib")
#pragma comment(lib, "lib32\\bass_fx.lib")
#pragma comment(lib, "lib32\\bass_mpc.lib")
#pragma comment(lib, "lib32\\bassenc.lib")
#pragma comment(lib, "lib32\\bassflac.lib")
#pragma comment(lib, "lib32\\bassmidi.lib")
#pragma comment(lib, "lib32\\bassmix.lib")
#pragma comment(lib, "lib32\\basswv.lib")
#endif
#ifdef NATIVE2JAVA_WIN_64
#pragma comment(lib, "lib64\\bass.lib")
#pragma comment(lib, "lib64\\bass_spx.lib")
#pragma comment(lib, "lib64\\bass_aac.lib")
#pragma comment(lib, "lib64\\bass_ac3.lib")
#pragma comment(lib, "lib64\\bass_alac.lib")
#pragma comment(lib, "lib64\\bass_fx.lib")
#pragma comment(lib, "lib64\\bass_mpc.lib")
#pragma comment(lib, "lib64\\bassenc.lib")
#pragma comment(lib, "lib64\\bassflac.lib")
#pragma comment(lib, "lib64\\bassmidi.lib")
#pragma comment(lib, "lib64\\bassmix.lib")
#pragma comment(lib, "lib64\\basswv.lib")
#endif

JNIEXPORT jint JNICALL Java_jouvieje_bass_BassInit_get_1BASSVERSION(JNIEnv *jenv, jclass jcls) {
	return BASSVERSION;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_BassInit_get_1NATIVEBASS_1VERSION(JNIEnv *jenv, jclass jcls) {
	return NATIVEBASS_VERSION;
}

JNIEXPORT jboolean JNICALL Java_jouvieje_bass_BassInit_attachJavaVM(JNIEnv *jenv, jclass jcls) {
	return attachJavaVM(jenv);
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_BassInit_get_1PLATFORM(JNIEnv *jenv, jclass jcls) {
	return CURRENT_PLATFORM;
}
