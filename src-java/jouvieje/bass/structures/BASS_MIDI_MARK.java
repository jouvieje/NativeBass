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

public class BASS_MIDI_MARK extends Pointer {
	/**
	 * Create a view of the <code>Pointer</code> object as a <code>BASS_MIDI_MARK</code> object.<br>
	 * This view is valid only if the memory holded by the <code>Pointer</code> holds a BASS_MIDI_MARK object.
	 */
	public static BASS_MIDI_MARK asBASS_MIDI_MARK(Pointer pointer) {
		long address = Pointer.getPointer(pointer);
		if(address == 0) return null;
		return new BASS_MIDI_MARK(address);
	}
	/**
	 * Allocate a new <code>BASS_MIDI_MARK</code>.<br>
	 * The call <code>isNull()</code> on the object created will return false.<br>
	 * <pre><code>  BASS_MIDI_MARK obj = BASS_MIDI_MARK.allocate();
	 *  (obj == null) <=> obj.isNull() <=> false
	 * </code></pre>
	 */
	public static BASS_MIDI_MARK allocate() {
		final long pointer = StructureJNI.BASS_MIDI_MARK_new();
		if(pointer == 0) throw new OutOfMemoryError();
		return new BASS_MIDI_MARK(pointer);
	}

	protected BASS_MIDI_MARK(long pointer) {
		super(pointer);
	}

	/**
	 * Create an object that holds a null <code>BASS_MIDI_MARK</code>.<br>
	 * The call <code>isNull()</code> on the object created will returns true.<br>
	 * <pre><code>  BASS_MIDI_MARK obj = new BASS_MIDI_MARK();
	 *  (obj == null) <=> false
	 *  obj.isNull() <=> true
	 * </code></pre>
	 * To creates a new <code>BASS_MIDI_MARK</code>, use the static "constructor" :
	 * <pre><code>  BASS_MIDI_MARK obj = BASS_MIDI_MARK.allocate();</code></pre>
	 * @see BASS_MIDI_MARK#allocate()
	 */
	public BASS_MIDI_MARK() {
		super();
	}

	public void release() {
		if(pointer != 0) {
			StructureJNI.BASS_MIDI_MARK_delete(pointer);
		}
		pointer = 0;
	}

	/**
	 * track containing marker
	 */
	public int getTrack() {
		if(pointer == 0) throw new NullPointerException();
		int javaResult = StructureJNI.BASS_MIDI_MARK_get_track(pointer);
		return javaResult;
	}
	/**
	 * track containing marker
	 */
	public void setTrack(int track) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_MIDI_MARK_set_track(pointer, track);
	}

	/**
	 * marker position (bytes)
	 */
	public int getPos() {
		if(pointer == 0) throw new NullPointerException();
		int javaResult = StructureJNI.BASS_MIDI_MARK_get_pos(pointer);
		return javaResult;
	}
	/**
	 * marker position (bytes)
	 */
	public void setPos(int pos) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_MIDI_MARK_set_pos(pointer, pos);
	}

	/**
	 * marker text
	 */
	public String getText() {
		if(pointer == 0) throw new NullPointerException();
		String javaResult = StructureJNI.BASS_MIDI_MARK_get_text(pointer);
		return javaResult;
	}
	/**
	 * marker text
	 */
	public void setText(String text) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_MIDI_MARK_set_text(pointer, text == null ? null : text.getBytes());
	}

}