/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
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
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class StructWithRefAndAnnotCppNoexceptMoveCtor implements TBase, java.io.Serializable, Cloneable, Comparable<StructWithRefAndAnnotCppNoexceptMoveCtor> {
  private static final TStruct STRUCT_DESC = new TStruct("StructWithRefAndAnnotCppNoexceptMoveCtor");
  private static final TField DEF_FIELD_FIELD_DESC = new TField("def_field", TType.STRUCT, (short)1);

  public Empty def_field;
  public static final int DEF_FIELD = 1;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(DEF_FIELD, new FieldMetaData("def_field", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, Empty.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(StructWithRefAndAnnotCppNoexceptMoveCtor.class, metaDataMap);
  }

  public StructWithRefAndAnnotCppNoexceptMoveCtor() {
  }

  public StructWithRefAndAnnotCppNoexceptMoveCtor(
    Empty def_field)
  {
    this();
    this.def_field = def_field;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public StructWithRefAndAnnotCppNoexceptMoveCtor(StructWithRefAndAnnotCppNoexceptMoveCtor other) {
    if (other.isSetDef_field()) {
      this.def_field = TBaseHelper.deepCopy(other.def_field);
    }
  }

  public StructWithRefAndAnnotCppNoexceptMoveCtor deepCopy() {
    return new StructWithRefAndAnnotCppNoexceptMoveCtor(this);
  }

  @Deprecated
  public StructWithRefAndAnnotCppNoexceptMoveCtor clone() {
    return new StructWithRefAndAnnotCppNoexceptMoveCtor(this);
  }

  public Empty getDef_field() {
    return this.def_field;
  }

  public StructWithRefAndAnnotCppNoexceptMoveCtor setDef_field(Empty def_field) {
    this.def_field = def_field;
    return this;
  }

  public void unsetDef_field() {
    this.def_field = null;
  }

  // Returns true if field def_field is set (has been assigned a value) and false otherwise
  public boolean isSetDef_field() {
    return this.def_field != null;
  }

  public void setDef_fieldIsSet(boolean __value) {
    if (!__value) {
      this.def_field = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case DEF_FIELD:
      if (__value == null) {
        unsetDef_field();
      } else {
        setDef_field((Empty)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case DEF_FIELD:
      return getDef_field();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof StructWithRefAndAnnotCppNoexceptMoveCtor)
      return this.equals((StructWithRefAndAnnotCppNoexceptMoveCtor)that);
    return false;
  }

  public boolean equals(StructWithRefAndAnnotCppNoexceptMoveCtor that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_def_field = true && this.isSetDef_field();
    boolean that_present_def_field = true && that.isSetDef_field();
    if (this_present_def_field || that_present_def_field) {
      if (!(this_present_def_field && that_present_def_field))
        return false;
      if (!TBaseHelper.equalsNobinary(this.def_field, that.def_field))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {def_field});
  }

  @Override
  public int compareTo(StructWithRefAndAnnotCppNoexceptMoveCtor other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetDef_field()).compareTo(other.isSetDef_field());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(def_field, other.def_field);
    if (lastComparison != 0) {
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) { 
        break;
      }
      switch (__field.id)
      {
        case DEF_FIELD:
          if (__field.type == TType.STRUCT) {
            this.def_field = new Empty();
            this.def_field.read(iprot);
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


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.def_field != null) {
      oprot.writeFieldBegin(DEF_FIELD_FIELD_DESC);
      this.def_field.write(oprot);
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
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("StructWithRefAndAnnotCppNoexceptMoveCtor");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("def_field");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getDef_field() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getDef_field(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

