/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyStructFieldN26Patch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MyStructFieldN26Patch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.LIST, (short)1);
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField REMOVE_FIELD_DESC = new TField("remove", TType.LIST, (short)7);
  private static final TField PREPEND_FIELD_DESC = new TField("prepend", TType.LIST, (short)8);
  private static final TField APPEND_FIELD_DESC = new TField("append", TType.LIST, (short)9);

  /**
   * Assigns a value. If set, all other operations are ignored.
   */
  public final List<Short> assign;
  /**
   * Clears a value. Applies first.
   */
  public final Boolean clear;
  /**
   * Removes entries, if present. Applies third.
   */
  public final List<Short> remove;
  /**
   * Prepends to the front of a given list.
   */
  public final List<Short> prepend;
  /**
   * Appends to the back of a given list.
   */
  public final List<Short> append;
  public static final int ASSIGN = 1;
  public static final int CLEAR = 2;
  public static final int REMOVE = 7;
  public static final int PREPEND = 8;
  public static final int APPEND = 9;

  public MyStructFieldN26Patch(
      List<Short> assign,
      Boolean clear,
      List<Short> remove,
      List<Short> prepend,
      List<Short> append) {
    this.assign = assign;
    this.clear = clear;
    this.remove = remove;
    this.prepend = prepend;
    this.append = append;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStructFieldN26Patch(MyStructFieldN26Patch other) {
    if (other.isSetAssign()) {
      this.assign = TBaseHelper.deepCopy(other.assign);
    } else {
      this.assign = null;
    }
    if (other.isSetClear()) {
      this.clear = TBaseHelper.deepCopy(other.clear);
    } else {
      this.clear = null;
    }
    if (other.isSetRemove()) {
      this.remove = TBaseHelper.deepCopy(other.remove);
    } else {
      this.remove = null;
    }
    if (other.isSetPrepend()) {
      this.prepend = TBaseHelper.deepCopy(other.prepend);
    } else {
      this.prepend = null;
    }
    if (other.isSetAppend()) {
      this.append = TBaseHelper.deepCopy(other.append);
    } else {
      this.append = null;
    }
  }

  public MyStructFieldN26Patch deepCopy() {
    return new MyStructFieldN26Patch(this);
  }

  /**
   * Assigns a value. If set, all other operations are ignored.
   */
  public List<Short> getAssign() {
    return this.assign;
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return this.assign != null;
  }

  /**
   * Clears a value. Applies first.
   */
  public Boolean isClear() {
    return this.clear;
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return this.clear != null;
  }

  /**
   * Removes entries, if present. Applies third.
   */
  public List<Short> getRemove() {
    return this.remove;
  }

  // Returns true if field remove is set (has been assigned a value) and false otherwise
  public boolean isSetRemove() {
    return this.remove != null;
  }

  /**
   * Prepends to the front of a given list.
   */
  public List<Short> getPrepend() {
    return this.prepend;
  }

  // Returns true if field prepend is set (has been assigned a value) and false otherwise
  public boolean isSetPrepend() {
    return this.prepend != null;
  }

  /**
   * Appends to the back of a given list.
   */
  public List<Short> getAppend() {
    return this.append;
  }

  // Returns true if field append is set (has been assigned a value) and false otherwise
  public boolean isSetAppend() {
    return this.append != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyStructFieldN26Patch))
      return false;
    MyStructFieldN26Patch that = (MyStructFieldN26Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAssign(), that.isSetAssign(), this.assign, that.assign)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetClear(), that.isSetClear(), this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetRemove(), that.isSetRemove(), this.remove, that.remove)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPrepend(), that.isSetPrepend(), this.prepend, that.prepend)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetAppend(), that.isSetAppend(), this.append, that.append)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, clear, remove, prepend, append});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MyStructFieldN26Patch deserialize(TProtocol iprot) throws TException {
    List<Short> tmp_assign = null;
    Boolean tmp_clear = null;
    List<Short> tmp_remove = null;
    List<Short> tmp_prepend = null;
    List<Short> tmp_append = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ASSIGN:
          if (__field.type == TType.LIST) {
            {
              TList _list13 = iprot.readListBegin();
              tmp_assign = new ArrayList<Short>(Math.max(0, _list13.size));
              for (int _i14 = 0; 
                   (_list13.size < 0) ? iprot.peekList() : (_i14 < _list13.size); 
                   ++_i14)
              {
                Short _elem15;
                _elem15 = iprot.readI16();
                tmp_assign.add(_elem15);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case CLEAR:
          if (__field.type == TType.BOOL) {
            tmp_clear = iprot.readBool();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REMOVE:
          if (__field.type == TType.LIST) {
            {
              TList _list16 = iprot.readListBegin();
              tmp_remove = new ArrayList<Short>(Math.max(0, _list16.size));
              for (int _i17 = 0; 
                   (_list16.size < 0) ? iprot.peekList() : (_i17 < _list16.size); 
                   ++_i17)
              {
                Short _elem18;
                _elem18 = iprot.readI16();
                tmp_remove.add(_elem18);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PREPEND:
          if (__field.type == TType.LIST) {
            {
              TList _list19 = iprot.readListBegin();
              tmp_prepend = new ArrayList<Short>(Math.max(0, _list19.size));
              for (int _i20 = 0; 
                   (_list19.size < 0) ? iprot.peekList() : (_i20 < _list19.size); 
                   ++_i20)
              {
                Short _elem21;
                _elem21 = iprot.readI16();
                tmp_prepend.add(_elem21);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case APPEND:
          if (__field.type == TType.LIST) {
            {
              TList _list22 = iprot.readListBegin();
              tmp_append = new ArrayList<Short>(Math.max(0, _list22.size));
              for (int _i23 = 0; 
                   (_list22.size < 0) ? iprot.peekList() : (_i23 < _list22.size); 
                   ++_i23)
              {
                Short _elem24;
                _elem24 = iprot.readI16();
                tmp_append.add(_elem24);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    MyStructFieldN26Patch _that;
    _that = new MyStructFieldN26Patch(
      tmp_assign
      ,tmp_clear
      ,tmp_remove
      ,tmp_prepend
      ,tmp_append
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.assign != null) {
      if (isSetAssign()) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        {
          oprot.writeListBegin(new TList(TType.I16, this.assign.size()));
          for (Short _iter25 : this.assign)          {
            oprot.writeI16(_iter25);
          }
          oprot.writeListEnd();
        }
        oprot.writeFieldEnd();
      }
    }
    if (this.clear != null) {
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
    }
    if (this.remove != null) {
      oprot.writeFieldBegin(REMOVE_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I16, this.remove.size()));
        for (Short _iter26 : this.remove)        {
          oprot.writeI16(_iter26);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.prepend != null) {
      oprot.writeFieldBegin(PREPEND_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I16, this.prepend.size()));
        for (Short _iter27 : this.prepend)        {
          oprot.writeI16(_iter27);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.append != null) {
      oprot.writeFieldBegin(APPEND_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I16, this.append.size()));
        for (Short _iter28 : this.append)        {
          oprot.writeI16(_iter28);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

