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

package jouvieje.bass.structures;

import jouvieje.bass.*;
import jouvieje.bass.exceptions.*;
import jouvieje.bass.callbacks.*;
import jouvieje.bass.*;
import jouvieje.bass.defines.*;
import jouvieje.bass.enumerations.*;
import jouvieje.bass.structures.*;
import java.nio.*;
import jouvieje.bass.*;
import jouvieje.bass.enumerations.*;
import jouvieje.bass.structures.*;
import jouvieje.bass.utils.*;

public class BASS_PLUGININFO extends Pointer {
	/**
	 * Create a view of the <code>Pointer</code> object as a <code>BASS_PLUGININFO</code> object.<br>
	 * This view is valid only if the memory holded by the <code>Pointer</code> holds a BASS_PLUGININFO object.
	 */
	public static BASS_PLUGININFO asBASS_PLUGININFO(Pointer pointer) {
		long address = Pointer.getPointer(pointer);
		if(address == 0) return null;
		return new BASS_PLUGININFO(address);
	}
	/**
	 * Allocate a new <code>BASS_PLUGININFO</code>.<br>
	 * The call <code>isNull()</code> on the object created will return false.<br>
	 * <pre><code>  BASS_PLUGININFO obj = BASS_PLUGININFO.allocate();
	 *  (obj == null) <=> obj.isNull() <=> false
	 * </code></pre>
	 */
	public static BASS_PLUGININFO allocate() {
		final long pointer = StructureJNI.BASS_PLUGININFO_new();
		if(pointer == 0) throw new OutOfMemoryError();
		return new BASS_PLUGININFO(pointer);
	}

	protected BASS_PLUGININFO(long pointer) {
		super(pointer);
	}

	/**
	 * Create an object that holds a null <code>BASS_PLUGININFO</code>.<br>
	 * The call <code>isNull()</code> on the object created will returns true.<br>
	 * <pre><code>  BASS_PLUGININFO obj = new BASS_PLUGININFO();
	 *  (obj == null) <=> false
	 *  obj.isNull() <=> true
	 * </code></pre>
	 * To creates a new <code>BASS_PLUGININFO</code>, use the static "constructor" :
	 * <pre><code>  BASS_PLUGININFO obj = BASS_PLUGININFO.allocate();</code></pre>
	 * @see BASS_PLUGININFO#allocate()
	 */
	public BASS_PLUGININFO() {
		super();
	}

	public void release() {
		if(pointer != 0) {
			StructureJNI.BASS_PLUGININFO_delete(pointer);
		}
		pointer = 0;
	}

	/**
	 * version (same form as BASS_GetVersion)
	 */
	public int getVersion() {
		if(pointer == 0) throw new NullPointerException();
		int javaResult = StructureJNI.BASS_PLUGININFO_get_version(pointer);
		return javaResult;
	}

	/**
	 * number of formats
	 */
	public int getNumFormats() {
		if(pointer == 0) throw new NullPointerException();
		int javaResult = StructureJNI.BASS_PLUGININFO_get_formatc(pointer);
		return javaResult;
	}

	/**
	 * the array of formats
	 */
	public BASS_PLUGINFORM getFormat(int elementIndex) {
		if(pointer == 0) throw new NullPointerException();
		if(elementIndex < 0 || elementIndex > getNumFormats()) throw new IndexOutOfBoundsException(elementIndex+" out of bounds [0; "+getNumFormats()+"[");
		long javaResult = StructureJNI.BASS_PLUGININFO_get_formats_element(pointer, elementIndex);
		return javaResult == 0 ? null : BASS_PLUGINFORM.asBASS_PLUGINFORM(Pointer.newPointer(javaResult));
	}
	/**
	 * the array of formats
	 */
	public BASS_PLUGINFORM[] getFormats() {
		if(pointer == 0) throw new NullPointerException();
		long javaResult = StructureJNI.BASS_PLUGININFO_get_formats(pointer);
		int formatsLength = getNumFormats();
		if(formatsLength <= 0 || javaResult == 0) return null;
		BASS_PLUGINFORM[] formatsArray = new BASS_PLUGINFORM[formatsLength];
		int SIZEOF_BASS_PLUGINFORM = StructureJNI.BASS_PLUGINFORM_SIZEOF();
		for(int i = 0; i < formatsArray.length; i++) {
			formatsArray[i] = new BASS_PLUGINFORM(javaResult + i * SIZEOF_BASS_PLUGINFORM);
		}
		return formatsArray;
	}

}