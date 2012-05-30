/* DO NOT EDIT - AUTOGENERATED */
/**
 * 				NativeBass Project
 *
 * Want to use BASS (www.un4seen.com) in the Java language ? NativeBass is made for you.
 * Copyright @ 2007-2011 Jérôme Jouvie
 *
 * Created on 02 jul. 2007
 * @version file v1.1.1
 * @author Jérôme Jouvie (Jouvieje)
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

package jouvieje.bass.defines;

/**
 * defines for formats field of BASS_RECORDINFO (from MMSYSTEM.H) [NAME] WAVE_FORMAT
 */
public interface WAVE_FORMAT {
	/** 11.025 kHz, Mono,   8-bit */
	public static final int WAVE_FORMAT_1M08 = 0x00000001;
	/** 11.025 kHz, Stereo, 8-bit */
	public static final int WAVE_FORMAT_1S08 = 0x00000002;
	/** 11.025 kHz, Mono,   16-bit */
	public static final int WAVE_FORMAT_1M16 = 0x00000004;
	/** 11.025 kHz, Stereo, 16-bit */
	public static final int WAVE_FORMAT_1S16 = 0x00000008;
	/** 22.05  kHz, Mono,   8-bit */
	public static final int WAVE_FORMAT_2M08 = 0x00000010;
	/** 22.05  kHz, Stereo, 8-bit */
	public static final int WAVE_FORMAT_2S08 = 0x00000020;
	/** 22.05  kHz, Mono,   16-bit */
	public static final int WAVE_FORMAT_2M16 = 0x00000040;
	/** 22.05  kHz, Stereo, 16-bit */
	public static final int WAVE_FORMAT_2S16 = 0x00000080;
	/** 44.1   kHz, Mono,   8-bit */
	public static final int WAVE_FORMAT_4M08 = 0x00000100;
	/** 44.1   kHz, Stereo, 8-bit */
	public static final int WAVE_FORMAT_4S08 = 0x00000200;
	/** 44.1   kHz, Mono,   16-bit */
	public static final int WAVE_FORMAT_4M16 = 0x00000400;
	/** 44.1   kHz, Stereo, 16-bit */
	public static final int WAVE_FORMAT_4S16 = 0x00000800;
}